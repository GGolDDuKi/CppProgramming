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
//		cout << title << ' ' << price << "원 " <<pages << " 페이지" << endl;
//	}
//	string getTitle() { return title; }	
//	Book operator +=(int price) {		//멤버변수 price와 매개변수 price를 += 하는 연산자 중복
//		this->price += price;
//		return *this;		//객체 반환
//	}
//	Book operator -=(int price) {		//멤버변수 price와 매개변수 price를 -= 하는 연산자 중복
//		this->price -= price;
//		return *this;		//객체 반환
//	}
//	bool operator ==(int price) {		//멤버변수 price와 매개변수 price를 비교하여 bool값 반환
//		if (this->price == price) { return true; }
//		else { return false; }
//	}
//	bool operator ==(string title) {		//멤버변수 title과 매개변수 title을 비교하는 연산자 중복
//		if (this->title == title) { return true; }
//		else { return false; }
//	}
//	bool operator ==(Book op2) {		//객체1과 객체2를 비교하는 연산자 중복
//		if (price == op2.price && title == op2.title && pages == op2.pages) { return true; }
//		else { return false; }
//	}
//	bool operator !() {			//price의 값이 0인지 확인하는 연산자
//		if (!price) { return true; }
//		else { return false; }
//	}
//};

//int main() {
//	Book a("청춘", 20000, 300), b("미래", 30000, 500);
//	a += 500; // 책 a의 가격 500원 증가
//	b -= 500; // 책 b의 가격 500원 감소
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
//		cout << title << ' ' << price << "원 " <<pages << " 페이지" << endl;
//	}
//	string getTitle() { return title; }	
//	friend Book operator +=(Book &op1, int price);		//연산자 중복을 위한 프랜드화
//	friend Book operator -=(Book &op1, int price);
//	friend bool operator ==(Book op1, int price);
//	friend bool operator ==(Book op1, string title);
//	friend bool operator ==(Book op1, Book op2);
//	friend bool operator !(Book op1);
//	friend bool operator <(string title, Book op1);
//};
//
//Book operator +=(Book &op1, int price) {		//op1의 멤버 price와 매개변수 price를 += 연산자 중복
//	op1.price += price;
//	return op1;
//}
//
//Book operator -=(Book &op1, int price) {		//op1의 멤버 price와 매개변수 price를 -= 연산자 중복
//	op1.price -= price;
//	return op1;
//}
//
//bool operator ==(Book op1, int price) {		//op1의 멤버 price와 매개변수 price를 == 연산자 중복
//	if (op1.price == price) { return true; }
//	else { return false; }
//}
//
//bool operator ==(Book op1, string title) {		//op1의 멤버 title와 매개변수 title를 == 연산자 중복
//	if (op1.title == title) { return true; }
//	else { return false; }
//}
//
//bool operator ==(Book op1, Book op2) {		//op1과 op2를 == 연산자 중복
//	if (op1.title == op2.title && op1.price == op2.price && op1.pages == op2.pages) { return true; }
//	else { return false; }
//}
//
//bool operator !(Book op1) {		//op1의 price를 !연산자 중복
//	if (!op1.price) { return true; }
//	else { return false; }
//}
//
//bool operator <(string title, Book op1) {		//매개변수 title과 op1멤버 title을 < 연산자 중복
//	if (title < op1.title) { return true; }
//	else { return false; }
//}

//int main() {
//	Book a("청춘", 20000, 300), b("미래", 30000, 500);
//	a += 500; // 책 a의 가격 500원 증가
//	b -= 500; // 책 b의 가격 500원 감소
//	a.show();
//	b.show();
//}


//2
//int main() {
//	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
//	if (a == 30000) cout << "정가 30000원" << endl; // price 비교
//	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
//	if (a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교 
//}

//3
//int main() {
//	Book book("벼룩시장", 0, 50); // 가격은 0
//	if (!book) cout << "공짜다" << endl;
//}

//4(프렌드)
//int main() {
//	Book a("청춘", 20000, 300);
//	string b;
//	cout << "책 이름을 입력하세요>>";
//	getline(cin, b);
//	if (b < a)
//		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
//	else
//		cout << a.getTitle() << "이 " << b << "보다 앞에 있구나!" << endl;
//}

//5-1
//class Color { // 하나의 색을 나타내는 클래스
//	int r, g, b;
//public:
//	Color() { r = g = b = 0; } // 생성자
//	Color(int r, int g, int b) { // 생성자
//		this->r = r; this->g = g; this->b = b;
//	}
//	void show() { cout << r << ' ' << g << ' ' << b << endl; }	
//	Color& operator +(Color op2) {		//객체끼리 +연산하는 +연산자 중복
//		Color op3;
//		op3.r = r + op2.r;
//		op3.g = g + op2.g;
//		op3.b = b + op2.b;
//		return op3;
//	}
//	bool operator ==(Color op2) {		//객체끼리 비교하는 ==연산자 중복
//		if (r == op2.r && g == op2.g && b == op2.b) { return true; }
//		else { return false; }
//	}
//};

//5-2
//class Color { // 하나의 색을 나타내는 클래스
//	int r, g, b;
//public:
//	Color() { r = g = b = 0; } // 생성자
//	Color(int r, int g, int b) { // 생성자
//		this->r = r; this->g = g; this->b = b;
//	}
//	void show() { cout << r << ' ' << g << ' ' << b << endl; }
//	friend Color& operator +(Color op1, Color op2);		//연산자 중복을 위한 프랜드화
//	friend bool operator ==(Color op1, Color op2);
//};
//
//Color& operator +(Color op1, Color op2) {		//객체끼리 +연산하는 +연산자 중복
//	Color op3;
//	op3.r = op1.r + op2.r;
//	op3.g = op1.g + op2.g;
//	op3.b = op1.b + op2.b;
//	return op3;
//}
//
//bool operator ==(Color op1, Color op2) {		//객체끼리 비교하는 ==연산자 중복
//	if (op1.r == op2.r && op1.g == op2.g && op1.b == op2.b) { return true; }
//	else { return false; }
//}
//
//int main() {
//	Color red(255, 0, 0), blue(0, 0, 255), c;
//	c = red + blue; // red.+(blue) 호출
//	c.show(); // 색 값 출력
//
//	Color fuchsia(255, 0, 255);
//	if (c == fuchsia) // c.==(fuchsia) 호출
//		cout << "보라색 맞음";
//	else
//		cout << "보라색 아님";
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
//	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {		//생성자
//		ar[0] = a;
//		ar[1] = b;
//		ar[2] = c;
//		ar[3] = d;
//	}
//	Matrix& operator +(Matrix op2) {		//객체끼리 더하는 +연산자 중복
//		Matrix op3;
//		for (int i = 0; i < 4; i++) {
//			op3.ar[i] = ar[i] + op2.ar[i];
//		}
//		return op3;
//	}
//	Matrix operator +=(Matrix op2) {		//객체끼리 더하는 += 연산자 중복
//		for (int i = 0; i < 4; i++) {
//			ar[i] += op2.ar[i];
//		}
//		return *this;
//	}
//	bool operator ==(Matrix op2) {		//객체끼리 비교하는 ==연산자 중복
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
//	friend Matrix& operator +(Matrix op1, Matrix op2);		//연산자 중복을 위한 프랜드화
//	friend Matrix operator +=(Matrix& op1, Matrix op2);
//	friend bool operator ==(Matrix op1, Matrix op2);
//};
//
//Matrix& operator +(Matrix op1, Matrix op2) {		//객체끼리 더하는 +연산자 중복
//	Matrix op3;
//	for (int i = 0; i < 4; i++) {
//		op3.ar[i] = op1.ar[i] + op2.ar[i];
//	}
//	return op3;
//}
//
//Matrix operator +=(Matrix& op1, Matrix op2) {		//객체끼리 더하는 +연산자 중복
//	for (int i = 0; i < 4; i++) {
//		op1.ar[i] += op2.ar[i];
//	}
//	return op1;
//}
//
//bool operator ==(Matrix op1, Matrix op2) {		//객체끼리 비교하는 ==연산자 중복
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
//	int* operator >>(int* op2) {		//배열에 객체를 복사하는 >>연산자 중복
//		for (int i = 0; i < 4; i++) {
//			op2[i] = ar[i];
//		}
//		return op2;
//	}
//	Matrix operator <<(int* op2) {		//배열을 객체에 복사하는 <<연산자 중복
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
//	friend Matrix& operator +(Matrix op1, Matrix op2);		//연산자 중복을 위한 프랜드화
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
//int* operator >>(Matrix op1, int* op2) {		//객체를 배열에 복사하는 >>연산자 중복
//	for (int i = 0; i < 4; i++) {
//		op2[i] = op1.ar[i];
//	}
//	return op2;
//}
//
//Matrix operator <<(Matrix& op1, int* op2) {		//배열을 객체에 복사하는 <<연산자 중복
//	for (int i = 0; i < 4; i++) {
//		op1.ar[i] = op2[i];
//	}
//	return op1;
//}

//7
//int main() {
//	Matrix a(4, 3, 2, 1), b;
//	int x[4], y[4] = { 1,2,3,4 };  // 2차원 행렬의 4 개의 원소 값
//	a >> x; // a의 각 원소를 배열 x에 복사. x[]는 {4,3,2,1}
//	b << y; // 배열 y의 원소 값을 b의 각 원소에 설정
//
//	for (int i = 0; i < 4; i++) cout << x[i] << ' '; // x[] 출력
//	cout << endl;
//	b.show();
//}


//10
 //제 설명 없이 스스로 설계해보세요
//class Statistics 
//{
//	int capacity; //동적할당 전체 크기
//	int size;	  //현재 데이터의 수
//	int* p;       //동적할당
//public:
//	Statistics() {		//생성자
//		capacity = 10;		
//		size = 0;
//		p = new int[capacity];
//	}
//	bool operator !() {		//현재 데이터의 수가 0인지 확인 !연산자 중복
//		if (!size) { return true; }
//		else { return false; }
//	}
//	Statistics& operator <<(int num) {		//동적할당받은 객체 멤버에 정수형 값을 저장, 객체를 참조반환하여 연속 호출 가능
//		*(p + size++) = num;
//		return *this;
//	}
//	void operator ~() {		//동적할당 메모리를 출력하는 ~연산자
//		for (int i = 0; i < size; i++) {
//			cout << p[i] << " ";
//		}
//		cout << endl;
//	}
//	int operator >>(int& avg) {		//평균을 구하는 >>연산자 중복
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
//	if (!stat) cout << "현재 통계 데이타가 없습니다." << endl;
//
//	int x[5];
//	cout << "5 개의 정수를 입력하라>>";
//	for (int i = 0; i < 5; i++) cin >> x[i]; // x[i]에 정수 입력
//
//	for (int i = 0; i < 5; i++) stat << x[i]; // x[i] 값을 통계 객체에 삽입한다.
//	stat << 100 << 200; // 100, 200을 통계 객체에 삽입한다.
//	~stat; // 통계 데이타를 모두 출력한다.
//
//	int avg = 0;
//	stat >> avg;  // 통계 객체로 부터 평균을 받는다.
//	cout << "avg=" << avg << endl; // 평균을 출력한다
//}