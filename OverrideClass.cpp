#include <iostream>
#include <string>

using namespace std;

//1
//class Circle {
//	int radius;
//public:
//	Circle(int radius = 0) { this->radius = radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//	double getArea() { return 3.14 * radius * radius; };
//};
//
//class NamedCircle : public Circle {		//Circle을 상속받는 NamedCircle 클래스
//	string name;
//public:
//	NamedCircle(int r, string name) : Circle(r) {		//생성자
//		this->name = name;
//	}
//	void show() { cout << "반지름이 " << getRadius() << "인 " << name; }
//};
//
//int main() {
//	NamedCircle waffle(3, "waffle"); // 반지름이 3이고 이름이 waffle인 원
//	waffle.show();
//}


//2
//class Circle {
//	int radius;
//public:
//	Circle(int radius = 0) { this->radius = radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//	double getArea() { return 3.14 * radius * radius; };
//};
//
//class NamedCircle : public Circle {		//Circle클래스를 상속받는 NamedCircle 클래스
//	string name;
//public:
//	NamedCircle(int r = 0, string name = "") : Circle(r) {		//디폴트 매개변수를 가지는 생성자
//		this->name = name;
//	}
//	void show() { cout << "반지름이 " << getRadius() << "인 " << name; }
//	void set(int r, string name){
//		setRadius(r);
//		this->name = name;
//	}
//	string getName() { return name; }
//};
//
//string biggest(NamedCircle *pizza, int size) {		//NamedCircle타입의 배열과 정수형 변수를 매개변수로 받는 함수
//	int index = 0;
//	for (int i = 0; i < size; i++) {
//		if (pizza[index].getArea() < pizza[i].getArea()) {
//			index = i;
//		}
//	}
//	return pizza[index].getName();
//}
//
//int main() {
//	NamedCircle pizza[5];		//NamedCircle타입을 5개 저장하는 배열 선언
//	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
//	for (int i = 0; i < 5; i++) {
//		int r;
//		string name;
//		cout << i + 1 << ">> ";
//		cin >> r;
//		getline(cin, name);
//		if (r <= 0) {
//			cout << "다시 입력하세요" << endl;
//			i--;
//			continue;
//		}
//		pizza[i].set(r, name);
//	}
//	cout << "가장 면적이 큰 피자는 " << biggest(pizza, 5) << "입니다" << endl;
//}


//3
//class Point {
//	int x, y;
//public:
//	Point(int x, int y) {		//생성자
//		this->x = x; this->y = y;
//	}
//	int getX() { return x; }
//	int getY() { return y; }
//protected:		//상속한 파생클래스에서 접근 가능
//	void move(int x, int y) { this->x = x; this->y = y; }
//};
//
//class ColorPoint : public Point {		//Point 클래스를 상속받는 ColorPoint 클래스 선언
//	string color;
//public:
//	ColorPoint(int x, int y, string color) : Point(x, y){		//기본클래스의 생성자로 멤버변수 초기화
//		this->color = color;
//	}
//	void setPoint(int x, int y) {
//		move(x, y);		//move멤버함수는 protected라 접근 가능
//	}
//	void setColor(string color) {
//		this->color = color;
//	}
//	void show() {
//		cout << color << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다.";
//	}
//};
//
//int main()
//{
//	ColorPoint cp(5, 5, "RED");
//	cp.setPoint(10, 20);
//	cp.setColor("BLUE");
//	cp.show();
//}


//4
//class Point {
//	int x, y;
//public:
//	Point(int x, int y) {
//		this->x = x; this->y = y;
//	}
//	int getX() { return x; }
//	int getY() { return y; }
//protected:
//	void move(int x, int y) { this->x = x; this->y = y; }
//};
//
//class ColorPoint : public Point {
//	string color;
//public:
//	ColorPoint(int x = 0, int y = 0, string color = "BLACK") : Point(x, y){		//디폴트 매개변수를 가지는 생성자, 기본 클래스의 생성자로 멤버변수 초기화
//		this->color = color;
//	}
//	void setPoint(int x, int y) {
//		move(x, y);
//	}
//	void setColor(string color) {
//		this->color = color;
//	}
//	void show() {
//		cout << color << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다." << endl;
//	}
//};
//
//int main()
//{
//	ColorPoint zeroPoint; // BLACK에 (0, 0) 위치의 점
//	zeroPoint.show(); // zeroPoint를 출력한다. 
//
//	ColorPoint cp(5, 5);
//	cp.setPoint(10, 20);
//	cp.setColor("BLUE");
//	cp.show(); // cp를 출력한다.
//}


//5
//class BaseArray
//{
//private:
//	int capacity; // 동적 할당된 메모리 용량
//	int* mem;
//protected:
//	BaseArray(int capacity = 100) {
//		this->capacity = capacity; mem = new int[capacity];
//	}
//	~BaseArray() { delete[] mem; }
//	void put(int index, int val) { mem[index] = val; }
//	int get(int index) { return mem[index]; }
//	int getCapacity() { return capacity; }
//};
//
//class MyQueue : public BaseArray {		//BaseArray 클래스를 상속받는 MyQueue 클래스 선언
//	int head, tail, size;
//public:
//	MyQueue(int capacity) : BaseArray(capacity) {		//기본클래스의 생성자로 멤버변수 초기화
//		head = 0, tail = 0, size = 0;
//	}
//	void enqueue(int n) {
//		put(tail, n);
//		tail++;
//		size++;
//	}
//	int capacity() {
//		return getCapacity();
//	}
//	int length() {	return size; }
//	int dequeue() {
//		int n = get(head);
//		head++;
//		size--;
//		return n;
//	}
//};
//
//int main()
//{
//	MyQueue mQ(100);
//	int n;
//	cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
//	for (int i = 0; i < 5; i++) {
//		cin >> n;
//		mQ.enqueue(n); // 큐에 삽입
//	}
//	cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
//	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
//	while (mQ.length() != 0) {
//		cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력
//	}
//	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
//}


//6
//class BaseArray
//{
//private:
//	int capacity; // 동적 할당된 메모리 용량
//	int* mem;
//protected:
//	BaseArray(int capacity = 100) {
//		this->capacity = capacity; mem = new int[capacity];
//	}
//	~BaseArray() { delete[] mem; }
//	void put(int index, int val) { mem[index] = val; }
//	int get(int index) { return mem[index]; }
//	int getCapacity() { return capacity; }
//};
//
//class MyStack : public BaseArray {		//BaseArray 클래스를 상속받는 MyStack클래스 선언
//	int size;
//public:
//	MyStack(int capacity) : BaseArray(capacity) {		//기본클래스의 생성자로 멤버변수 capacity 초기화
//		size = 0;
//	}
//	int capacity() {
//		return getCapacity();
//	}
//	int length() {	return size; }
//	void push(int n) {
//		put(size++, n);		//mem[size]에 n을 입력한 후 size 증가
//	}
//	int pop() {
//		int n = get(--size);		//정수형 변수 n에 mem[size]의 값을 입력한 후 size값 감소
//		return n;
//	}
//};
//
//int main()
//{
//	MyStack mStack(100);
//	int n;
//	cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
//	for (int i = 0; i < 5; i++) {
//		cin >> n;
//		mStack.push(n); // 스택에 푸시
//	}
//	cout << "스택 용량:" << mStack.capacity() << ", 스택 크기:" << mStack.length() << endl;
//	cout << "스택의 모든 원소를 팝하여 출력한다>> ";
//	while (mStack.length() != 0) {
//		cout << mStack.pop() << ' '; // 스택에서 팝
//	}
//	cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
//}

//큐는 First In First Out 스택은 First In Last Out