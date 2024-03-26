#include <iostream>
#include <string>
using namespace std;

//1-1
//class Book {
//	string title;
//	int price;
//	int pages;
//public:
//	Book(string title="", int price=0, int pages=0) {
//		this->title = title; this->price = price; 	this->pages = pages;
//	}
//	void show() {
//		cout << title << ' ' << price << "�� " <<pages << " ������" << endl;
//	}
//	string getTitle() { return title; }	
//	Book operator +=(int price) {		//������� price�� �Ű����� price�� += �ϴ� ������ �ߺ�
//		this->price += price;
//		return *this;		//��ü ��ȯ
//	}
//	Book operator -=(int price) {		//������� price�� �Ű����� price�� -= �ϴ� ������ �ߺ�
//		this->price -= price;
//		return *this;		//��ü ��ȯ
//	}
//	bool operator ==(int price) {		//������� price�� �Ű����� price�� ���Ͽ� bool�� ��ȯ
//		if (this->price == price) { return true; }
//		else { return false; }
//	}
//	bool operator ==(string title) {		//������� title�� �Ű����� title�� ���ϴ� ������ �ߺ�
//		if (this->title == title) { return true; }
//		else { return false; }
//	}
//	bool operator ==(Book op2) {		//��ü1�� ��ü2�� ���ϴ� ������ �ߺ�
//		if (price == op2.price && title == op2.title && pages == op2.pages) { return true; }
//		else { return false; }
//	}
//	bool operator !() {			//price�� ���� 0���� Ȯ���ϴ� ������
//		if (!price) { return true; }
//		else { return false; }
//	}
//};

//int main() {
//	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
//	a += 500; // å a�� ���� 500�� ����
//	b -= 500; // å b�� ���� 500�� ����
//	a.show();
//	b.show();
//}

//1-2
//class Book {
//	string title;
//	int price;
//	int pages;
//public:
//	Book(string title="", int price=0, int pages=0) {
//		this->title = title; this->price = price; 	this->pages = pages;
//	}
//	void show() {
//		cout << title << ' ' << price << "�� " <<pages << " ������" << endl;
//	}
//	string getTitle() { return title; }	
//	friend Book operator +=(Book &op1, int price);		//������ �ߺ��� ���� ������ȭ
//	friend Book operator -=(Book &op1, int price);
//	friend bool operator ==(Book op1, int price);
//	friend bool operator ==(Book op1, string title);
//	friend bool operator ==(Book op1, Book op2);
//	friend bool operator !(Book op1);
//	friend bool operator <(string title, Book op1);
//};
//
//Book operator +=(Book &op1, int price) {		//op1�� ��� price�� �Ű����� price�� += ������ �ߺ�
//	op1.price += price;
//	return op1;
//}
//
//Book operator -=(Book &op1, int price) {		//op1�� ��� price�� �Ű����� price�� -= ������ �ߺ�
//	op1.price -= price;
//	return op1;
//}
//
//bool operator ==(Book op1, int price) {		//op1�� ��� price�� �Ű����� price�� == ������ �ߺ�
//	if (op1.price == price) { return true; }
//	else { return false; }
//}
//
//bool operator ==(Book op1, string title) {		//op1�� ��� title�� �Ű����� title�� == ������ �ߺ�
//	if (op1.title == title) { return true; }
//	else { return false; }
//}
//
//bool operator ==(Book op1, Book op2) {		//op1�� op2�� == ������ �ߺ�
//	if (op1.title == op2.title && op1.price == op2.price && op1.pages == op2.pages) { return true; }
//	else { return false; }
//}
//
//bool operator !(Book op1) {		//op1�� price�� !������ �ߺ�
//	if (!op1.price) { return true; }
//	else { return false; }
//}
//
//bool operator <(string title, Book op1) {		//�Ű����� title�� op1��� title�� < ������ �ߺ�
//	if (title < op1.title) { return true; }
//	else { return false; }
//}

//int main() {
//	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
//	a += 500; // å a�� ���� 500�� ����
//	b -= 500; // å b�� ���� 500�� ����
//	a.show();
//	b.show();
//}


//2
//int main() {
//	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
//	if (a == 30000) cout << "���� 30000��" << endl; // price ��
//	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
//	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� �� 
//}

//3
//int main() {
//	Book book("�������", 0, 50); // ������ 0
//	if (!book) cout << "��¥��" << endl;
//}

//4(������)
//int main() {
//	Book a("û��", 20000, 300);
//	string b;
//	cout << "å �̸��� �Է��ϼ���>>";
//	getline(cin, b);
//	if (b < a)
//		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
//	else
//		cout << a.getTitle() << "�� " << b << "���� �տ� �ֱ���!" << endl;
//}

//5-1
//class Color { // �ϳ��� ���� ��Ÿ���� Ŭ����
//	int r, g, b;
//public:
//	Color() { r = g = b = 0; } // ������
//	Color(int r, int g, int b) { // ������
//		this->r = r; this->g = g; this->b = b;
//	}
//	void show() { cout << r << ' ' << g << ' ' << b << endl; }	
//	Color& operator +(Color op2) {		//��ü���� +�����ϴ� +������ �ߺ�
//		Color op3;
//		op3.r = r + op2.r;
//		op3.g = g + op2.g;
//		op3.b = b + op2.b;
//		return op3;
//	}
//	bool operator ==(Color op2) {		//��ü���� ���ϴ� ==������ �ߺ�
//		if (r == op2.r && g == op2.g && b == op2.b) { return true; }
//		else { return false; }
//	}
//};

//5-2
//class Color { // �ϳ��� ���� ��Ÿ���� Ŭ����
//	int r, g, b;
//public:
//	Color() { r = g = b = 0; } // ������
//	Color(int r, int g, int b) { // ������
//		this->r = r; this->g = g; this->b = b;
//	}
//	void show() { cout << r << ' ' << g << ' ' << b << endl; }
//	friend Color& operator +(Color op1, Color op2);		//������ �ߺ��� ���� ������ȭ
//	friend bool operator ==(Color op1, Color op2);
//};
//
//Color& operator +(Color op1, Color op2) {		//��ü���� +�����ϴ� +������ �ߺ�
//	Color op3;
//	op3.r = op1.r + op2.r;
//	op3.g = op1.g + op2.g;
//	op3.b = op1.b + op2.b;
//	return op3;
//}
//
//bool operator ==(Color op1, Color op2) {		//��ü���� ���ϴ� ==������ �ߺ�
//	if (op1.r == op2.r && op1.g == op2.g && op1.b == op2.b) { return true; }
//	else { return false; }
//}
//
//int main() {
//	Color red(255, 0, 0), blue(0, 0, 255), c;
//	c = red + blue; // red.+(blue) ȣ��
//	c.show(); // �� �� ���
//
//	Color fuchsia(255, 0, 255);
//	if (c == fuchsia) // c.==(fuchsia) ȣ��
//		cout << "����� ����";
//	else
//		cout << "����� �ƴ�";
//}

//6-1
//class Matrix {
//	int ar[4];
//public:
//	void show() {
//		cout << "Matrix = { ";
//		for (int i = 0; i < 4; i++) cout << ar[i] << ' ';
//		cout << "}" << endl;
//	}
//	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {		//������
//		ar[0] = a;
//		ar[1] = b;
//		ar[2] = c;
//		ar[3] = d;
//	}
//	Matrix& operator +(Matrix op2) {		//��ü���� ���ϴ� +������ �ߺ�
//		Matrix op3;
//		for (int i = 0; i < 4; i++) {
//			op3.ar[i] = ar[i] + op2.ar[i];
//		}
//		return op3;
//	}
//	Matrix operator +=(Matrix op2) {		//��ü���� ���ϴ� += ������ �ߺ�
//		for (int i = 0; i < 4; i++) {
//			ar[i] += op2.ar[i];
//		}
//		return *this;
//	}
//	bool operator ==(Matrix op2) {		//��ü���� ���ϴ� ==������ �ߺ�
//		int cnt = 0;
//		for (int i = 0; i < 4; i++) {
//			if (ar[i] == op2.ar[i])
//				cnt++;
//		}
//		if (cnt == 4) { return true; }
//		else { return false; }
//	}
//};

//6-2
//class Matrix {
//	int ar[4];
//public:
//	void show() {
//		cout << "Matrix = { ";
//		for (int i = 0; i < 4; i++) cout << ar[i] << ' ';
//		cout << "}" << endl;
//	}
//	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
//		ar[0] = a;
//		ar[1] = b;
//		ar[2] = c;
//		ar[3] = d;
//	}
//	friend Matrix& operator +(Matrix op1, Matrix op2);		//������ �ߺ��� ���� ������ȭ
//	friend Matrix operator +=(Matrix& op1, Matrix op2);
//	friend bool operator ==(Matrix op1, Matrix op2);
//};
//
//Matrix& operator +(Matrix op1, Matrix op2) {		//��ü���� ���ϴ� +������ �ߺ�
//	Matrix op3;
//	for (int i = 0; i < 4; i++) {
//		op3.ar[i] = op1.ar[i] + op2.ar[i];
//	}
//	return op3;
//}
//
//Matrix operator +=(Matrix& op1, Matrix op2) {		//��ü���� ���ϴ� +������ �ߺ�
//	for (int i = 0; i < 4; i++) {
//		op1.ar[i] += op2.ar[i];
//	}
//	return op1;
//}
//
//bool operator ==(Matrix op1, Matrix op2) {		//��ü���� ���ϴ� ==������ �ߺ�
//	int cnt = 0;
//	for (int i = 0; i < 4; i++) {
//		if (op1.ar[i] == op2.ar[i])
//			cnt++;
//	}
//	if (cnt == 4) { return true; }
//	else { return false; }
//}

//int main() {
//	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
//	c = a + b;
//	a += b;
//	a.show(); 	b.show(); c.show();
//	if (a == c)
//		cout << "a and c are the same" << endl;
//}

//7-1
//class Matrix {
//	int ar[4];
//public:
//	void show() {
//		cout << "Matrix = { ";
//		for (int i = 0; i < 4; i++) cout << ar[i] << ' ';
//		cout << "}" << endl;
//	}
//	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
//		ar[0] = a;
//		ar[1] = b;
//		ar[2] = c;
//		ar[3] = d;
//	}
//	Matrix& operator +(Matrix op2) {
//		Matrix op3;
//		for (int i = 0; i < 4; i++) {
//			op3.ar[i] = ar[i] + op2.ar[i];
//		}
//		return op3;
//	}
//	Matrix operator +=(Matrix op2) {
//		for (int i = 0; i < 4; i++) {
//			ar[i] += op2.ar[i];
//		}
//		return *this;
//	}
//	bool operator ==(Matrix op2) {
//		int cnt = 0;
//		for (int i = 0; i < 4; i++) {
//			if (ar[i] == op2.ar[i])
//				cnt++;
//		}
//		if (cnt == 4) { return true; }
//		else { return false; }
//	}
//	int* operator >>(int* op2) {		//�迭�� ��ü�� �����ϴ� >>������ �ߺ�
//		for (int i = 0; i < 4; i++) {
//			op2[i] = ar[i];
//		}
//		return op2;
//	}
//	Matrix operator <<(int* op2) {		//�迭�� ��ü�� �����ϴ� <<������ �ߺ�
//		for (int i = 0; i < 4; i++) {
//			ar[i] = op2[i];
//		}
//		return *this;
//	}
//};

//7-2
//class Matrix {
//	int ar[4];
//public:
//	void show() {
//		cout << "Matrix = { ";
//		for (int i = 0; i < 4; i++) cout << ar[i] << ' ';
//		cout << "}" << endl;
//	}
//	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
//		ar[0] = a;
//		ar[1] = b;
//		ar[2] = c;
//		ar[3] = d;
//	}
//	friend Matrix& operator +(Matrix op1, Matrix op2);		//������ �ߺ��� ���� ������ȭ
//	friend Matrix operator +=(Matrix& op1, Matrix op2);
//	friend bool operator ==(Matrix op1, Matrix op2);
//	friend int* operator >>(Matrix op1, int* op2);
//	friend Matrix operator <<(Matrix& op1, int* op2);
//};
//
//Matrix& operator +(Matrix op1, Matrix op2) {
//	Matrix op3;
//	for (int i = 0; i < 4; i++) {
//		op3.ar[i] = op1.ar[i] + op2.ar[i];
//	}
//	return op3;
//}
//
//Matrix operator +=(Matrix& op1, Matrix op2) {
//	for (int i = 0; i < 4; i++) {
//		op1.ar[i] += op2.ar[i];
//	}
//	return op1;
//}
//
//bool operator ==(Matrix op1, Matrix op2) {
//	int cnt = 0;
//	for (int i = 0; i < 4; i++) {
//		if (op1.ar[i] == op2.ar[i])
//			cnt++;
//	}
//	if (cnt == 4) { return true; }
//	else { return false; }
//}
//
//int* operator >>(Matrix op1, int* op2) {		//��ü�� �迭�� �����ϴ� >>������ �ߺ�
//	for (int i = 0; i < 4; i++) {
//		op2[i] = op1.ar[i];
//	}
//	return op2;
//}
//
//Matrix operator <<(Matrix& op1, int* op2) {		//�迭�� ��ü�� �����ϴ� <<������ �ߺ�
//	for (int i = 0; i < 4; i++) {
//		op1.ar[i] = op2[i];
//	}
//	return op1;
//}

//7
//int main() {
//	Matrix a(4, 3, 2, 1), b;
//	int x[4], y[4] = { 1,2,3,4 };  // 2���� ����� 4 ���� ���� ��
//	a >> x; // a�� �� ���Ҹ� �迭 x�� ����. x[]�� {4,3,2,1}
//	b << y; // �迭 y�� ���� ���� b�� �� ���ҿ� ����
//
//	for (int i = 0; i < 4; i++) cout << x[i] << ' '; // x[] ���
//	cout << endl;
//	b.show();
//}


//10
 //�� ���� ���� ������ �����غ�����
//class Statistics 
//{
//	int capacity; //�����Ҵ� ��ü ũ��
//	int size;	  //���� �������� ��
//	int* p;       //�����Ҵ�
//public:
//	Statistics() {		//������
//		capacity = 10;		
//		size = 0;
//		p = new int[capacity];
//	}
//	bool operator !() {		//���� �������� ���� 0���� Ȯ�� !������ �ߺ�
//		if (!size) { return true; }
//		else { return false; }
//	}
//	Statistics& operator <<(int num) {		//�����Ҵ���� ��ü ����� ������ ���� ����, ��ü�� ������ȯ�Ͽ� ���� ȣ�� ����
//		*(p + size++) = num;
//		return *this;
//	}
//	void operator ~() {		//�����Ҵ� �޸𸮸� ����ϴ� ~������
//		for (int i = 0; i < size; i++) {
//			cout << p[i] << " ";
//		}
//		cout << endl;
//	}
//	int operator >>(int& avg) {		//����� ���ϴ� >>������ �ߺ�
//		for (int i = 0; i < size; i++) {
//			avg += p[i];
//		}
//		avg /= size;
//		return avg;
//	}
//};
//
//int main() {
//	Statistics stat;
//	if (!stat) cout << "���� ��� ����Ÿ�� �����ϴ�." << endl;
//
//	int x[5];
//	cout << "5 ���� ������ �Է��϶�>>";
//	for (int i = 0; i < 5; i++) cin >> x[i]; // x[i]�� ���� �Է�
//
//	for (int i = 0; i < 5; i++) stat << x[i]; // x[i] ���� ��� ��ü�� �����Ѵ�.
//	stat << 100 << 200; // 100, 200�� ��� ��ü�� �����Ѵ�.
//	~stat; // ��� ����Ÿ�� ��� ����Ѵ�.
//
//	int avg = 0;
//	stat >> avg;  // ��� ��ü�� ���� ����� �޴´�.
//	cout << "avg=" << avg << endl; // ����� ����Ѵ�
//}