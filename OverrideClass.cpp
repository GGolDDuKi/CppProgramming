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
//class NamedCircle : public Circle {		//Circle�� ��ӹ޴� NamedCircle Ŭ����
//	string name;
//public:
//	NamedCircle(int r, string name) : Circle(r) {		//������
//		this->name = name;
//	}
//	void show() { cout << "�������� " << getRadius() << "�� " << name; }
//};
//
//int main() {
//	NamedCircle waffle(3, "waffle"); // �������� 3�̰� �̸��� waffle�� ��
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
//class NamedCircle : public Circle {		//CircleŬ������ ��ӹ޴� NamedCircle Ŭ����
//	string name;
//public:
//	NamedCircle(int r = 0, string name = "") : Circle(r) {		//����Ʈ �Ű������� ������ ������
//		this->name = name;
//	}
//	void show() { cout << "�������� " << getRadius() << "�� " << name; }
//	void set(int r, string name){
//		setRadius(r);
//		this->name = name;
//	}
//	string getName() { return name; }
//};
//
//string biggest(NamedCircle *pizza, int size) {		//NamedCircleŸ���� �迭�� ������ ������ �Ű������� �޴� �Լ�
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
//	NamedCircle pizza[5];		//NamedCircleŸ���� 5�� �����ϴ� �迭 ����
//	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
//	for (int i = 0; i < 5; i++) {
//		int r;
//		string name;
//		cout << i + 1 << ">> ";
//		cin >> r;
//		getline(cin, name);
//		if (r <= 0) {
//			cout << "�ٽ� �Է��ϼ���" << endl;
//			i--;
//			continue;
//		}
//		pizza[i].set(r, name);
//	}
//	cout << "���� ������ ū ���ڴ� " << biggest(pizza, 5) << "�Դϴ�" << endl;
//}


//3
//class Point {
//	int x, y;
//public:
//	Point(int x, int y) {		//������
//		this->x = x; this->y = y;
//	}
//	int getX() { return x; }
//	int getY() { return y; }
//protected:		//����� �Ļ�Ŭ�������� ���� ����
//	void move(int x, int y) { this->x = x; this->y = y; }
//};
//
//class ColorPoint : public Point {		//Point Ŭ������ ��ӹ޴� ColorPoint Ŭ���� ����
//	string color;
//public:
//	ColorPoint(int x, int y, string color) : Point(x, y){		//�⺻Ŭ������ �����ڷ� ������� �ʱ�ȭ
//		this->color = color;
//	}
//	void setPoint(int x, int y) {
//		move(x, y);		//move����Լ��� protected�� ���� ����
//	}
//	void setColor(string color) {
//		this->color = color;
//	}
//	void show() {
//		cout << color << "������ (" << getX() << "," << getY() << ")�� ��ġ�� ���Դϴ�.";
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
//	ColorPoint(int x = 0, int y = 0, string color = "BLACK") : Point(x, y){		//����Ʈ �Ű������� ������ ������, �⺻ Ŭ������ �����ڷ� ������� �ʱ�ȭ
//		this->color = color;
//	}
//	void setPoint(int x, int y) {
//		move(x, y);
//	}
//	void setColor(string color) {
//		this->color = color;
//	}
//	void show() {
//		cout << color << "������ (" << getX() << "," << getY() << ")�� ��ġ�� ���Դϴ�." << endl;
//	}
//};
//
//int main()
//{
//	ColorPoint zeroPoint; // BLACK�� (0, 0) ��ġ�� ��
//	zeroPoint.show(); // zeroPoint�� ����Ѵ�. 
//
//	ColorPoint cp(5, 5);
//	cp.setPoint(10, 20);
//	cp.setColor("BLUE");
//	cp.show(); // cp�� ����Ѵ�.
//}


//5
//class BaseArray
//{
//private:
//	int capacity; // ���� �Ҵ�� �޸� �뷮
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
//class MyQueue : public BaseArray {		//BaseArray Ŭ������ ��ӹ޴� MyQueue Ŭ���� ����
//	int head, tail, size;
//public:
//	MyQueue(int capacity) : BaseArray(capacity) {		//�⺻Ŭ������ �����ڷ� ������� �ʱ�ȭ
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
//	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
//	for (int i = 0; i < 5; i++) {
//		cin >> n;
//		mQ.enqueue(n); // ť�� ����
//	}
//	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
//	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
//	while (mQ.length() != 0) {
//		cout << mQ.dequeue() << ' '; // ť���� �����Ͽ� ���
//	}
//	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
//}


//6
//class BaseArray
//{
//private:
//	int capacity; // ���� �Ҵ�� �޸� �뷮
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
//class MyStack : public BaseArray {		//BaseArray Ŭ������ ��ӹ޴� MyStackŬ���� ����
//	int size;
//public:
//	MyStack(int capacity) : BaseArray(capacity) {		//�⺻Ŭ������ �����ڷ� ������� capacity �ʱ�ȭ
//		size = 0;
//	}
//	int capacity() {
//		return getCapacity();
//	}
//	int length() {	return size; }
//	void push(int n) {
//		put(size++, n);		//mem[size]�� n�� �Է��� �� size ����
//	}
//	int pop() {
//		int n = get(--size);		//������ ���� n�� mem[size]�� ���� �Է��� �� size�� ����
//		return n;
//	}
//};
//
//int main()
//{
//	MyStack mStack(100);
//	int n;
//	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
//	for (int i = 0; i < 5; i++) {
//		cin >> n;
//		mStack.push(n); // ���ÿ� Ǫ��
//	}
//	cout << "���� �뷮:" << mStack.capacity() << ", ���� ũ��:" << mStack.length() << endl;
//	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
//	while (mStack.length() != 0) {
//		cout << mStack.pop() << ' '; // ���ÿ��� ��
//	}
//	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;
//}

//ť�� First In First Out ������ First In Last Out