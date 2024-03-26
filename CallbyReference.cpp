#include <iostream>
#include <string>
#include <memory>

using namespace std;

//3번
//void combine(string text1, string text2, string &text3) {		//text3의 공간에 text1과 text을 더함
//	text3 = text1 + " " +  text2;
//}
//
//int main() {
//	string text1("I love you"), text2("very much");
//	string text3;
//	combine(text1, text2, text3);
//	cout << text3;
//}

//5번
//class Circle {
//	int radius;
//public:
//	Circle(int r) { radius = r; }
//	int getRadius() { return radius; }
//	void setRadius(int r) { radius = r; }
//	void show() { cout << "반지름이 " << radius << "인 원" << endl; }
//};
//
//void increaseBy(Circle &a, Circle b) {		//객체 a를 참조, a와 b의 반지름을 더해 a의 반지름으로 변경
//	int r = a.getRadius() + b.getRadius();
//	a.setRadius(r);
//}
//
//int main() {
//	Circle x(10), y(5);		//반지름 10, 5의 원 생성
//	increaseBy(x, y);
//	x.show();
//}


//6번
//char& find(char a[], char c, bool& success) {		//문자열 a에서 문자 c를 찾아 반환
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
//		cout << "M을 발견할 수 없다" << endl;
//		return 0;
//	}
//	loc = 'm';		//loc는 find함수에서 찾은 문자의 공간, 'm'을 입력
//	cout << s << endl;
//}


//8번
//class MyIntStack {
//	int *p;
//	int size;
//	int tos;
//public:
//	MyIntStack() {
//		size = 0;
//		p = new int[size];		//size만큼의 정수를 저장할 수 있는 배열 동적할당
//		memset(p, 0, size);		//p배열의 size만큼 0으로 초기화
//		tos = 0;
//	}
//	MyIntStack(int size) {
//		this->size = size;		//멤버변수 size에 매개변수 size 입력
//		p = new int[size];		//size만큼의 정수를 저장할 수 있는 배열 동적할당
//		memset(p, 0, size);
//		tos = 0;
//	}
//	MyIntStack(const MyIntStack& s) {
//		this->size = s.size;		//멤버변수 size에 객체 s의 size를 입력
//		p = new int[size];		//size만큼의 정수를 저장할 수 있는 배열 동적할당
//		for (int i = 0; i < size; i++) {
//			this->p[i] = s.p[i];		//멤버변수 p에 객체 s의 p요소를 복사
//		}
//		this->tos = s.tos;		//멤버변수 tos에 객체 s의 tos를 복사
//	}
//	~MyIntStack() {
//		delete[] p;		//동적할당한 메모리 반환
//		p = nullptr;		//p가 가르키는 주소 초기화
//	}
//	bool push(int n) {
//		if (tos >= size) {		//스택이 꽉 찼을 경우
//			return false;
//		}
//		else {			//스택이 꽉 차지 않았을 경우
//			p[tos++] = n;		//p[tos]에 n을 입력한 뒤, tos에 1을 더함
//			return true;
//		}
//	}
//	bool pop(int &n) {
//		if (tos <= 0) {		//스택이 비어있을 경우
//			return false;
//		}
//		else {		//스택이 비어있지 않은 경우
//			n = p[--tos];		//tos에서 1을 뺀 뒤, n에 p[tos]의 값 입력
//			p[tos] = 0;			//p[tos]를 0으로 초기화
//		}
//	}
//};
//
//int main() {
//	MyIntStack a(10);
//	a.push(10);		//a에 10을 푸시
//	a.push(20);		//a에 20을 푸시
//	MyIntStack b = a;
//	b.push(30);		//b에 30을 푸시
//
//	int n;
//	a.pop(n);		//스택 a 팝
//	cout << "스택 a에서 팝한 값 " << n << endl;
//	b.pop(n);		//스택 b 팝
//	cout << "스택 b에서 팝한 값 " << n << endl;
//}


//9번
//class Accumulator {
//	int value;
//public:
//	Accumulator(int value) {		//매개변수 value로 멤버 value를 초기화
//		this->value = value;
//	}
//	Accumulator& add(int n) {		//value에 n을 더해 값을 누적
//		this->value += n;
//		return *this;
//	}
//	int get() {		//value를 리턴
//		return value;
//	}
//};
//
//int main() {
//	Accumulator acc(10);		//value를 10으로 초기화하는 객체 acc생성
//	acc.add(5).add(6).add(7);		//acc의 value멤버에 5, 6, 7을 더함
//	cout << acc.get();		//value의 값 출력
//}