#include <iostream>
#include <string>
#include <memory>

using namespace std;

//3��
//void combine(string text1, string text2, string &text3) {		//text3�� ������ text1�� text�� ����
//	text3 = text1 + " " +  text2;
//}
//
//int main() {
//	string text1("I love you"), text2("very much");
//	string text3;
//	combine(text1, text2, text3);
//	cout << text3;
//}

//5��
//class Circle {
//	int radius;
//public:
//	Circle(int r) { radius = r; }
//	int getRadius() { return radius; }
//	void setRadius(int r) { radius = r; }
//	void show() { cout << "�������� " << radius << "�� ��" << endl; }
//};
//
//void increaseBy(Circle &a, Circle b) {		//��ü a�� ����, a�� b�� �������� ���� a�� ���������� ����
//	int r = a.getRadius() + b.getRadius();
//	a.setRadius(r);
//}
//
//int main() {
//	Circle x(10), y(5);		//������ 10, 5�� �� ����
//	increaseBy(x, y);
//	x.show();
//}


//6��
//char& find(char a[], char c, bool& success) {		//���ڿ� a���� ���� c�� ã�� ��ȯ
//	for (int i = 0; i < sizeof(a) / sizeof(char); i++) {
//		if (a[i] == c) {
//			success = true;
//			return a[i];
//		}
//		else {
//			success = false;
//		}
//	}
//}
//
//int main() {
//	char s[] = "Mike";
//	bool b = false;
//	char& loc = find(s, 'M', b);
//	if (b == false) {
//		cout << "M�� �߰��� �� ����" << endl;
//		return 0;
//	}
//	loc = 'm';		//loc�� find�Լ����� ã�� ������ ����, 'm'�� �Է�
//	cout << s << endl;
//}


//8��
//class MyIntStack {
//	int *p;
//	int size;
//	int tos;
//public:
//	MyIntStack() {
//		size = 0;
//		p = new int[size];		//size��ŭ�� ������ ������ �� �ִ� �迭 �����Ҵ�
//		memset(p, 0, size);		//p�迭�� size��ŭ 0���� �ʱ�ȭ
//		tos = 0;
//	}
//	MyIntStack(int size) {
//		this->size = size;		//������� size�� �Ű����� size �Է�
//		p = new int[size];		//size��ŭ�� ������ ������ �� �ִ� �迭 �����Ҵ�
//		memset(p, 0, size);
//		tos = 0;
//	}
//	MyIntStack(const MyIntStack& s) {
//		this->size = s.size;		//������� size�� ��ü s�� size�� �Է�
//		p = new int[size];		//size��ŭ�� ������ ������ �� �ִ� �迭 �����Ҵ�
//		for (int i = 0; i < size; i++) {
//			this->p[i] = s.p[i];		//������� p�� ��ü s�� p��Ҹ� ����
//		}
//		this->tos = s.tos;		//������� tos�� ��ü s�� tos�� ����
//	}
//	~MyIntStack() {
//		delete[] p;		//�����Ҵ��� �޸� ��ȯ
//		p = nullptr;		//p�� ����Ű�� �ּ� �ʱ�ȭ
//	}
//	bool push(int n) {
//		if (tos >= size) {		//������ �� á�� ���
//			return false;
//		}
//		else {			//������ �� ���� �ʾ��� ���
//			p[tos++] = n;		//p[tos]�� n�� �Է��� ��, tos�� 1�� ����
//			return true;
//		}
//	}
//	bool pop(int &n) {
//		if (tos <= 0) {		//������ ������� ���
//			return false;
//		}
//		else {		//������ ������� ���� ���
//			n = p[--tos];		//tos���� 1�� �� ��, n�� p[tos]�� �� �Է�
//			p[tos] = 0;			//p[tos]�� 0���� �ʱ�ȭ
//		}
//	}
//};
//
//int main() {
//	MyIntStack a(10);
//	a.push(10);		//a�� 10�� Ǫ��
//	a.push(20);		//a�� 20�� Ǫ��
//	MyIntStack b = a;
//	b.push(30);		//b�� 30�� Ǫ��
//
//	int n;
//	a.pop(n);		//���� a ��
//	cout << "���� a���� ���� �� " << n << endl;
//	b.pop(n);		//���� b ��
//	cout << "���� b���� ���� �� " << n << endl;
//}


//9��
//class Accumulator {
//	int value;
//public:
//	Accumulator(int value) {		//�Ű����� value�� ��� value�� �ʱ�ȭ
//		this->value = value;
//	}
//	Accumulator& add(int n) {		//value�� n�� ���� ���� ����
//		this->value += n;
//		return *this;
//	}
//	int get() {		//value�� ����
//		return value;
//	}
//};
//
//int main() {
//	Accumulator acc(10);		//value�� 10���� �ʱ�ȭ�ϴ� ��ü acc����
//	acc.add(5).add(6).add(7);		//acc�� value����� 5, 6, 7�� ����
//	cout << acc.get();		//value�� �� ���
//}