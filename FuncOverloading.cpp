#include <iostream>
#include <string>

using namespace std;

//1��
//int add(int * a, int size) {
//	int sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += a[i];
//	}
//	return sum;
//}
//
//int add(int * a, int size, int * b) {
//	int sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += a[i] + b[i];
//	}
//	return sum;
//}
//
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 6,7,8,9,10 };
//	int c = add(a, 5); // �迭 a�� ������ ��� ���� �� ����
//	int d = add(a, 5, b); // �迭 a�� b�� ������ ��� ���� �� ����
//	cout << c << endl; // 15 ��� 
//	cout << d << endl; // 55 ���
//}


//1-2��
//int add(int * a, int size, int * b = nullptr) {		//�Ű����� b�� ����Ʈ ������ nullptr ����
//	int sum = 0;
//
//	if (b == nullptr) {		//b�� ����Ʈ�� ��� a�� �迭�� ��
//		for (int i = 0; i < size; i++) {
//			sum += a[i];
//		}
//	}
//	else {		//b�� ����Ʈ�� �ƴ� ��� a�� b �� �� ��
//		for (int i = 0; i < size; i++) {
//			sum += a[i] + b[i];
//		}
//	}
//
//	return sum;
//}
//
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 6,7,8,9,10 };
//	int c = add(a, 5); // �迭 a�� ������ ��� ���� �� ����
//	int d = add(a, 5, b); // �迭 a�� b�� ������ ��� ���� �� ����
//	cout << c << endl; // 15 ��� 
//	cout << d << endl; // 55 ���
//}

//2��
//class Person {
//	int id;
//	double weight;
//	string name;
//public:
//	Person();
//	Person(int id, string name);
//	Person(int id, string name, double weight);
//	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
//};
//
//Person::Person() {
//	id = 1;
//	name = "Grace";
//	weight = 20.5;
//}
//
//Person::Person(int id, string name) {
//	this->id = id;
//	this->name = name;
//	weight = 20.5;
//}
//
//Person::Person(int id, string name, double weight) {
//	this->id = id;
//	this->name = name;
//	this->weight = weight;
//}
//
//int main() {
//	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
//	grace.show();
//	ashley.show();
//	helen.show();
//}

//2-2��
//class Person {
//	int id;
//	double weight;
//	string name;
//public:
//	Person(int id = 1, string name = "Grace", double weight = 20.5);		//����Ʈ �Ű����� ����
//	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
//};
//
//Person::Person(int id, string name, double weight) {
//	this->id = id;
//	this->name = name;
//	this->weight = weight;
//}
//
//int main() {
//	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
//	grace.show();
//	ashley.show();
//	helen.show();
//}


//3��
//int big(int first, int second) {
//	int big = 0;
//	int max = 100;
//
//	if (first > second)
//		big = first;
//	else		//second�� first���� ũ�ų� ���� ���
//		big = second;
//
//	if (big >= max)
//		return max;
//	else
//		return big;
//}
//
//int big(int first, int second, int max) {
//	int big = 0;
//
//	if (first > second)
//		big = first;
//	else		//second�� first���� ũ�ų� ���� ���
//		big = second;
//
//	if (big >= max)
//		return max;
//	else
//		return big;
//}
//
//int main() {
//	int x = big(3, 5); // 3�� 5�� ū �� 5�� �ִ밪 100���� �����Ƿ�, 5 ����
//	int y = big(300, 60); // 300�� 60�� ū �� 300�� �ִ밪 100���� ũ�Ƿ�, 100 ����
//	int z = big(30, 60, 50); // 30�� 60 �� ū �� 60�� �ִ밪 50���� ũ�Ƿ�, 50 ����
//	cout << x << ' ' << y << ' ' << z << endl;
//}

//3-2��
//int big(int first, int second, int max = 100) {
//	int big = 0;
//	
//	if (first > second)
//		big = first;
//	else		//second�� first���� ũ�ų� ���� ���
//		big = second;
//
//	if (big >= max)
//		return max;
//	else
//		return big;
//}
//
//int main() {
//	int x = big(3, 5); // 3�� 5�� ū �� 5�� �ִ밪 100���� �����Ƿ�, 5 ����
//	int y = big(300, 60); // 300�� 60�� ū �� 300�� �ִ밪 100���� ũ�Ƿ�, 100 ����
//	int z = big(30, 60, 50); // 30�� 60 �� ū �� 60�� �ִ밪 50���� ũ�Ƿ�, 50 ����
//	cout << x << ' ' << y << ' ' << z << endl;
//}


//4��
//class MyVector {
//	int* mem;
//	int size;
//public:
//	MyVector(int n = 100, int val = 0);
//	~MyVector() { delete[] mem; }		//��ü �Ҹ�� mem�� ����Ű�� �����Ҵ� �޸� ��ȯ
//	void show() {
//		for (int i = 0; i < size; i++) cout << mem[i] << ' ';
//		cout << endl;
//	}
//};
//
//MyVector::MyVector(int n, int val){
//	mem = new int[n];		//n��ŭ ������ �����ϴ� �迭 �����Ҵ�
//	size = n;
//	for (int i = 0; i < size; i++) mem[i] = val;
//}
//
//int main() {
//	MyVector a;		// a(100, 0);�� ����
//	MyVector b(10, 3);
//
//	a.show();	// 100���� 0�� ���
//	b.show();	// 10���� 3�� ���
//}



//5��
//class ArrayUtility {
//public:
//	static void intToDouble(int source[], double dest[], int size); // int �迭�� double �迭�� ��ȯ
//	static void doubleToInt(double source[], int dest[], int size); // double �迭�� int �迭�� ��ȯ
//};
//
//void ArrayUtility::intToDouble(int source[], double dest[], int size) {
//	for (int i = 0; i < size; i++) {
//		dest[i] = (double)source[i];
//	}
//}
//
//void ArrayUtility::doubleToInt(double source[], int dest[], int size) {
//	for (int i = 0; i < size; i++) {
//		dest[i] = (int)source[i];
//	}
//}
//
//int main() {
//	int x[] = { 1,2,3,4,5 };
//	double y[5];
//	double z[] = { 9.9, 8.8, 7.7, 6.6, 5.6 };
//
//	ArrayUtility::intToDouble(x, y, 5); // x[] -> y[]
//	for (int i = 0; i < 5; i++) cout << y[i] << ' ';		//�Ҽ��� �ڸ� ���� 0�ϰ�� �����Ǿ� ǥ�õǴµ� cout.precision(n)�� ǥ�� �ڸ���, cout << showpoint�� �Ҽ��� ���ڸ� 0�� ǥ�� ����
//	cout << endl;
//
//	ArrayUtility::doubleToInt(z, x, 5); // z[] -> x[]
//	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
//	cout << endl;
//}