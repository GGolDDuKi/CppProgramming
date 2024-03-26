#include <iostream>
#include <string>

using namespace std;

//1번
//class Converter {
//protected:
//	double ratio;
//	virtual double convert(double src) = 0; // src를 다른 단위로 변환한다.
//	virtual string getSourceString() = 0; // 소스 단위 명칭
//	virtual string getDestString() = 0; // dest 단위 명칭
//public:
//	Converter(double ratio) { this->ratio = ratio; }
//	void run() {
//		double src;
//		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
//		cout << getSourceString() << "을 입력하세요>> ";
//		cin >> src;
//		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
//	}
//};
//
//class WonToDollar : public Converter {		//Converter를 상속받은 WonToDollar
//public:
//	WonToDollar(int ratio) : Converter(ratio) {	}		//Converter의 생성자로 WonToDollar 초기화
//	double convert(double src) {
//		double result = src / ratio;
//		return result;
//	}
//	string getSourceString() {
//		return "원";
//	}
//	string getDestString() {
//		return "달러";
//	}
//};
//
//int main() {
//	WonToDollar wd(1010); // 1 달러에 1010원
//	wd.run();
//}


//2번
//class Converter {
//protected:
//	double ratio;
//	virtual double convert(double src) = 0; // src를 다른 단위로 변환한다.
//	virtual string getSourceString() = 0; // 소스 단위 명칭
//	virtual string getDestString() = 0; // dest 단위 명칭
//public:
//	Converter(double ratio) { this->ratio = ratio; }		//생성자
//	void run() {
//		double src;
//		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
//		cout << getSourceString() << "을 입력하세요>> ";
//		cin >> src;
//		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
//	}
//};
//
//class KmToMile : public Converter {		//Converter를 상속받는 KmToMile 클래스 선언
//public:
//	KmToMile(double ratio) : Converter(ratio) {}		//Converter의 생성자로 멤버 초기화
//	double convert(double src) {
//		double result = src / ratio;
//		return result;
//	}
//	string getSourceString() {
//		return "Km";
//	}
//	string getDestString() {
//		return "Mile";
//	}
//};
//
//int main() {
//	KmToMile toMile(1.609344); // 1mile은 1.609344 Km
//	toMile.run();
//}


//3번
//class LoopAdder { // 추상 클래스
//	string name; // 루프의 이름
//	int x, y, sum;
//	void read(); // x, y 값을 읽어 들이는 함수
//	void write(); // sum을 출력하는 함수
//protected:
//	LoopAdder(string name = "") { // 루프의 이름을 받는다. 초깃값은 ""
//		this->name = name;
//	}
//	int getX() { return x; }
//	int getY() { return y; }
//	virtual int calculate() = 0; // 순수 가상 함수. 루프를 돌면서 합을 구하는 함수
//public:
//	void run(); // 연산을 진행하는 함수
//};
//
//void LoopAdder::read() { // x, y 입력
//	cout << name << ":" << endl;
//	cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
//	cin >> x >> y;
//}
//void LoopAdder::write() { // 결과 sum 출력
//	cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다" << endl;
//}
//
//void LoopAdder::run() {
//	read(); // x, y를 읽는다.
//	sum = calculate(); // 루프돌면서 계산한다.
//	write(); // 결과 sum을 출력한다.
//}
//
//class ForLoopAdder : public LoopAdder {		//LoopAdder 클래스를 상속받는 ForLoopAdder 클래스 선언
//public:
//	ForLoopAdder(string name) : LoopAdder(name) {}		//기본클래스의 생성자로 파생클래스 초기화
//	int calculate() {
//		int sum = 0;
//		for (int i = getX(); i <= getY(); i++) {
//			sum += i;
//		}
//		return sum;
//	}
//};
//
//int main() {
//	ForLoopAdder forLoop("For Loop");
//	forLoop.run();
//}


//4번
//class LoopAdder { // 추상 클래스
//	string name; // 루프의 이름
//	int x, y, sum;
//	void read(); // x, y 값을 읽어 들이는 함수
//	void write(); // sum을 출력하는 함수
//protected:
//	LoopAdder(string name = "") { // 루프의 이름을 받는다. 초깃값은 ""
//		this->name = name;
//	}
//	int getX() { return x; }
//	int getY() { return y; }
//	virtual int calculate() = 0; // 순수 가상 함수. 루프를 돌면서 합을 구하는 함수
//public:
//	void run(); // 연산을 진행하는 함수
//};
//
//void LoopAdder::read() { // x, y 입력
//	cout << name << ":" << endl;
//	cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
//	cin >> x >> y;
//}
//void LoopAdder::write() { // 결과 sum 출력
//	cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다" << endl;
//}
//
//void LoopAdder::run() {
//	read(); // x, y를 읽는다.
//	sum = calculate(); // 루프돌면서 계산한다.
//	write(); // 결과 sum을 출력한다.
//}
//
//class WhileLoopAdder : public LoopAdder {		//LoopAdder 클래스를 상속받는 WhileLoopAdder 클래스 선언
//public:
//	WhileLoopAdder(string name) : LoopAdder(name){}		//기본클래스의 생성자로 파생클래스 초기화
//	int calculate() {
//		int sum = 0, start = getX(), end = getY();
//		while (start <= end) {
//			sum += start++;
//		}
//		return sum;
//	}
//};
//
//class DoWhileLoopAdder : public LoopAdder {		//LoopAdder 클래스를 상속받는 DoWhileLoopAdder 클래스 선언
//public:
//	DoWhileLoopAdder(string name) : LoopAdder(name){}		//기본클래스의 생성자로 파생클래스 초기화
//	int calculate() {
//		int sum = 0, start = getX(), end = getY();
//		do {
//			sum += start++;
//		} while (start <= end);
//		return sum;
//	}
//};
//
//int main() {
//	WhileLoopAdder whileLoop("While Loop");
//	DoWhileLoopAdder doWhileLoop("Do while Loop");
//
//	whileLoop.run();
//	doWhileLoop.run();
//}


//5번
//class AbstractGate { // 추상 클래스
//protected:
//	bool x, y;
//public:
//	void set(bool x, bool y) { this->x = x; this->y = y; }
//	virtual bool operation() = 0; // 순수 가상 함수
//};
//
//class ANDGate : public AbstractGate {		//AbstractGate 클래스를 상속받는 ANDGate 클래스 선언
//public:
//	bool operation() {		//순수 가상 함수 정의
//		return x && y;
//	}
//};
//
//class ORGate : public AbstractGate {		//AbstractGate 클래스를 상속받는 ORGate 클래스 선언
//public:
//	bool operation() {		//순수 가상 함수 정의
//		return x || y;
//	}
//};
//
//class XORGate : public AbstractGate {		//AbstractGate 클래스를 상속받는 XORGate 클래스 선언
//public:	
//	bool operation() {		//순수 가상 함수 정의
//		return x ^ y;
//	}
//};
//
//int main() {
//	ANDGate andGate;
//	ORGate orGate;
//	XORGate xorGate;
//
//	andGate.set(true, false);
//	orGate.set(true, false);
//	xorGate.set(true, false);
//	cout.setf(ios::boolalpha); // 불린 값을 "true', "false" 문자열로 출력할 것을 지시
//	cout << andGate.operation() << endl; // AND 결과는 false
//	cout << orGate.operation() << endl; // OR 결과는 true
//	cout << xorGate.operation() << endl; // XOR 결과는 true
//}



//6번
//class AbstractStack {
//public:
//	virtual bool push(int n) = 0; // 스택에 n을 푸시한다. 스택이 full이면 false 리턴
//	virtual bool pop(int& n) = 0; // 스택에서 팝한 정수를 n에 리턴한다. 스택이 empty이면 false 리턴
//	virtual int size() = 0; // 현재 스택에 저장된 정수의 개수 리턴
//};
//
//class IntStack : public AbstractStack {		//AbstarctStack 클래스를 상속받는 IntStack 클래스 선언
//	int arrsize;
//	int * arr;
//	int index;
//public:
//	IntStack(int size) { 
//		this->arrsize = size; 
//		index = 0;
//		arr = new int[arrsize] {0};
//	}
//	bool push(int n) {
//		if (index < arrsize) {
//			arr[index++] = n;
//			return true;
//		}
//		else
//			return false;
//	}
//	bool pop(int& n) {
//		if (!index) return false;		//저장된 정수의 갯수가 0일 경우 false 반환
//		else {
//			n = arr[--index];
//			return true;
//		}
//	}
//	int size() {
//		return index;
//	}
//};
//
//int main() {
//	IntStack a(5);
//	for (int i = 0; i < 10; i++) { // 처음 5 개를 성공적으로 push되고 다음 5 개는 스택 full로 push 실패
//		if (a.push(i)) cout << "push 성공" << endl;
//		else cout << "스택 full" << endl;
//	}
//
//	int n;
//	for (int i = 0; i < 10; i++) { // 처음 5 개를 성공적으로 pop되고 다음 5 개는 스택 empty로 pop 실패
//		if (a.pop(n)) cout << "pop 성공 " << n << endl;
//		else cout << "스택 empty" << endl;
//	}
//}


//타원 넓이 = width x height x pi
//7번
//class Shape {
//protected:
//	string name; // 도형의 이름
//	int width, height; // 도형이 내접하는 사각형의 너비와 높이
//public:
//	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
//	virtual double getArea() = 0; // dummy 값 리턴
//	string getName() { return name; } // 이름 리턴
//};
//
//class Oval : public Shape {		//Shape 클래스를 상속받는 Oval 클래스 선언
//public:
//	Oval(string n, int w, int h) : Shape(n, w, h){}		//기본클래스의 생성자로 파생클래스 초기화
//	double getArea() {
//		double pi = 3.14;
//		return width * height * pi;
//	}
//};
//
//class Rect : public Shape {		//Shape 클래스를 상속받는 Rect 클래스 선언
//public:
//	Rect(string n, int w, int h) : Shape(n, w, h) {}		//기본클래스의 생성자로 파생클래스 초기화
//	double getArea() {
//		return width * height;
//	}
//};
//
//class Triangular : public Shape {		//Shape 클래스를 상속받는 Triangular 클래스 선언
//public:
//	Triangular(string n, int w, int h) : Shape(n, w, h) {}		//기본클래스의 생성자로 파생클래스 초기화
//	double getArea() {
//		return (width * height) / 2;
//	}
//};
//
//int main() {
//	Shape* p[3];
//	p[0] = new Oval("빈대떡", 10, 20);
//	p[1] = new Rect("찰떡", 30, 40);
//	p[2] = new Triangular("토스트", 30, 40);
//	for (int i = 0; i < 3; i++)
//		cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;
//
//	for (int i = 0; i < 3; i++) delete p[i];
//}