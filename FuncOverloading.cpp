#include <iostream>
#include <string>

using namespace std;

//1번
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
//	int c = add(a, 5); // 배열 a의 정수를 모두 더한 값 리턴
//	int d = add(a, 5, b); // 배열 a와 b의 정수를 모두 더한 값 리턴
//	cout << c << endl; // 15 출력 
//	cout << d << endl; // 55 출력
//}


//1-2번
//int add(int * a, int size, int * b = nullptr) {		//매개변수 b에 디폴트 값으로 nullptr 선언
//	int sum = 0;
//
//	if (b == nullptr) {		//b가 디폴트일 경우 a의 배열만 합
//		for (int i = 0; i < size; i++) {
//			sum += a[i];
//		}
//	}
//	else {		//b가 디폴트가 아닐 경우 a와 b 둘 다 합
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
//	int c = add(a, 5); // 배열 a의 정수를 모두 더한 값 리턴
//	int d = add(a, 5, b); // 배열 a와 b의 정수를 모두 더한 값 리턴
//	cout << c << endl; // 15 출력 
//	cout << d << endl; // 55 출력
//}

//2번
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

//2-2번
//class Person {
//	int id;
//	double weight;
//	string name;
//public:
//	Person(int id = 1, string name = "Grace", double weight = 20.5);		//디폴트 매개변수 선언
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


//3번
//int big(int first, int second) {
//	int big = 0;
//	int max = 100;
//
//	if (first > second)
//		big = first;
//	else		//second가 first보다 크거나 같은 경우
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
//	else		//second가 first보다 크거나 같은 경우
//		big = second;
//
//	if (big >= max)
//		return max;
//	else
//		return big;
//}
//
//int main() {
//	int x = big(3, 5); // 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
//	int y = big(300, 60); // 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
//	int z = big(30, 60, 50); // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
//	cout << x << ' ' << y << ' ' << z << endl;
//}

//3-2번
//int big(int first, int second, int max = 100) {
//	int big = 0;
//	
//	if (first > second)
//		big = first;
//	else		//second가 first보다 크거나 같은 경우
//		big = second;
//
//	if (big >= max)
//		return max;
//	else
//		return big;
//}
//
//int main() {
//	int x = big(3, 5); // 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
//	int y = big(300, 60); // 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
//	int z = big(30, 60, 50); // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
//	cout << x << ' ' << y << ' ' << z << endl;
//}


//4번
//class MyVector {
//	int* mem;
//	int size;
//public:
//	MyVector(int n = 100, int val = 0);
//	~MyVector() { delete[] mem; }		//객체 소멸시 mem이 가르키는 동적할당 메모리 반환
//	void show() {
//		for (int i = 0; i < size; i++) cout << mem[i] << ' ';
//		cout << endl;
//	}
//};
//
//MyVector::MyVector(int n, int val){
//	mem = new int[n];		//n만큼 정수를 저장하는 배열 동적할당
//	size = n;
//	for (int i = 0; i < size; i++) mem[i] = val;
//}
//
//int main() {
//	MyVector a;		// a(100, 0);과 동일
//	MyVector b(10, 3);
//
//	a.show();	// 100개의 0이 출력
//	b.show();	// 10개의 3이 출력
//}



//5번
//class ArrayUtility {
//public:
//	static void intToDouble(int source[], double dest[], int size); // int 배열을 double 배열로 변환
//	static void doubleToInt(double source[], int dest[], int size); // double 배열을 int 배열로 변환
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
//	for (int i = 0; i < 5; i++) cout << y[i] << ' ';		//소수점 자리 끝이 0일경우 생략되어 표시되는데 cout.precision(n)로 표현 자리수, cout << showpoint로 소수점 끝자리 0을 표현 가능
//	cout << endl;
//
//	ArrayUtility::doubleToInt(z, x, 5); // z[] -> x[]
//	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
//	cout << endl;
//}