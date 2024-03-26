#include <iostream>
#include <string>

using namespace std;

//1��
//class Converter {
//protected:
//	double ratio;
//	virtual double convert(double src) = 0; // src�� �ٸ� ������ ��ȯ�Ѵ�.
//	virtual string getSourceString() = 0; // �ҽ� ���� ��Ī
//	virtual string getDestString() = 0; // dest ���� ��Ī
//public:
//	Converter(double ratio) { this->ratio = ratio; }
//	void run() {
//		double src;
//		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
//		cout << getSourceString() << "�� �Է��ϼ���>> ";
//		cin >> src;
//		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
//	}
//};
//
//class WonToDollar : public Converter {		//Converter�� ��ӹ��� WonToDollar
//public:
//	WonToDollar(int ratio) : Converter(ratio) {	}		//Converter�� �����ڷ� WonToDollar �ʱ�ȭ
//	double convert(double src) {
//		double result = src / ratio;
//		return result;
//	}
//	string getSourceString() {
//		return "��";
//	}
//	string getDestString() {
//		return "�޷�";
//	}
//};
//
//int main() {
//	WonToDollar wd(1010); // 1 �޷��� 1010��
//	wd.run();
//}


//2��
//class Converter {
//protected:
//	double ratio;
//	virtual double convert(double src) = 0; // src�� �ٸ� ������ ��ȯ�Ѵ�.
//	virtual string getSourceString() = 0; // �ҽ� ���� ��Ī
//	virtual string getDestString() = 0; // dest ���� ��Ī
//public:
//	Converter(double ratio) { this->ratio = ratio; }		//������
//	void run() {
//		double src;
//		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
//		cout << getSourceString() << "�� �Է��ϼ���>> ";
//		cin >> src;
//		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
//	}
//};
//
//class KmToMile : public Converter {		//Converter�� ��ӹ޴� KmToMile Ŭ���� ����
//public:
//	KmToMile(double ratio) : Converter(ratio) {}		//Converter�� �����ڷ� ��� �ʱ�ȭ
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
//	KmToMile toMile(1.609344); // 1mile�� 1.609344 Km
//	toMile.run();
//}


//3��
//class LoopAdder { // �߻� Ŭ����
//	string name; // ������ �̸�
//	int x, y, sum;
//	void read(); // x, y ���� �о� ���̴� �Լ�
//	void write(); // sum�� ����ϴ� �Լ�
//protected:
//	LoopAdder(string name = "") { // ������ �̸��� �޴´�. �ʱ갪�� ""
//		this->name = name;
//	}
//	int getX() { return x; }
//	int getY() { return y; }
//	virtual int calculate() = 0; // ���� ���� �Լ�. ������ ���鼭 ���� ���ϴ� �Լ�
//public:
//	void run(); // ������ �����ϴ� �Լ�
//};
//
//void LoopAdder::read() { // x, y �Է�
//	cout << name << ":" << endl;
//	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
//	cin >> x >> y;
//}
//void LoopAdder::write() { // ��� sum ���
//	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
//}
//
//void LoopAdder::run() {
//	read(); // x, y�� �д´�.
//	sum = calculate(); // �������鼭 ����Ѵ�.
//	write(); // ��� sum�� ����Ѵ�.
//}
//
//class ForLoopAdder : public LoopAdder {		//LoopAdder Ŭ������ ��ӹ޴� ForLoopAdder Ŭ���� ����
//public:
//	ForLoopAdder(string name) : LoopAdder(name) {}		//�⺻Ŭ������ �����ڷ� �Ļ�Ŭ���� �ʱ�ȭ
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


//4��
//class LoopAdder { // �߻� Ŭ����
//	string name; // ������ �̸�
//	int x, y, sum;
//	void read(); // x, y ���� �о� ���̴� �Լ�
//	void write(); // sum�� ����ϴ� �Լ�
//protected:
//	LoopAdder(string name = "") { // ������ �̸��� �޴´�. �ʱ갪�� ""
//		this->name = name;
//	}
//	int getX() { return x; }
//	int getY() { return y; }
//	virtual int calculate() = 0; // ���� ���� �Լ�. ������ ���鼭 ���� ���ϴ� �Լ�
//public:
//	void run(); // ������ �����ϴ� �Լ�
//};
//
//void LoopAdder::read() { // x, y �Է�
//	cout << name << ":" << endl;
//	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
//	cin >> x >> y;
//}
//void LoopAdder::write() { // ��� sum ���
//	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
//}
//
//void LoopAdder::run() {
//	read(); // x, y�� �д´�.
//	sum = calculate(); // �������鼭 ����Ѵ�.
//	write(); // ��� sum�� ����Ѵ�.
//}
//
//class WhileLoopAdder : public LoopAdder {		//LoopAdder Ŭ������ ��ӹ޴� WhileLoopAdder Ŭ���� ����
//public:
//	WhileLoopAdder(string name) : LoopAdder(name){}		//�⺻Ŭ������ �����ڷ� �Ļ�Ŭ���� �ʱ�ȭ
//	int calculate() {
//		int sum = 0, start = getX(), end = getY();
//		while (start <= end) {
//			sum += start++;
//		}
//		return sum;
//	}
//};
//
//class DoWhileLoopAdder : public LoopAdder {		//LoopAdder Ŭ������ ��ӹ޴� DoWhileLoopAdder Ŭ���� ����
//public:
//	DoWhileLoopAdder(string name) : LoopAdder(name){}		//�⺻Ŭ������ �����ڷ� �Ļ�Ŭ���� �ʱ�ȭ
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


//5��
//class AbstractGate { // �߻� Ŭ����
//protected:
//	bool x, y;
//public:
//	void set(bool x, bool y) { this->x = x; this->y = y; }
//	virtual bool operation() = 0; // ���� ���� �Լ�
//};
//
//class ANDGate : public AbstractGate {		//AbstractGate Ŭ������ ��ӹ޴� ANDGate Ŭ���� ����
//public:
//	bool operation() {		//���� ���� �Լ� ����
//		return x && y;
//	}
//};
//
//class ORGate : public AbstractGate {		//AbstractGate Ŭ������ ��ӹ޴� ORGate Ŭ���� ����
//public:
//	bool operation() {		//���� ���� �Լ� ����
//		return x || y;
//	}
//};
//
//class XORGate : public AbstractGate {		//AbstractGate Ŭ������ ��ӹ޴� XORGate Ŭ���� ����
//public:	
//	bool operation() {		//���� ���� �Լ� ����
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
//	cout.setf(ios::boolalpha); // �Ҹ� ���� "true', "false" ���ڿ��� ����� ���� ����
//	cout << andGate.operation() << endl; // AND ����� false
//	cout << orGate.operation() << endl; // OR ����� true
//	cout << xorGate.operation() << endl; // XOR ����� true
//}



//6��
//class AbstractStack {
//public:
//	virtual bool push(int n) = 0; // ���ÿ� n�� Ǫ���Ѵ�. ������ full�̸� false ����
//	virtual bool pop(int& n) = 0; // ���ÿ��� ���� ������ n�� �����Ѵ�. ������ empty�̸� false ����
//	virtual int size() = 0; // ���� ���ÿ� ����� ������ ���� ����
//};
//
//class IntStack : public AbstractStack {		//AbstarctStack Ŭ������ ��ӹ޴� IntStack Ŭ���� ����
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
//		if (!index) return false;		//����� ������ ������ 0�� ��� false ��ȯ
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
//	for (int i = 0; i < 10; i++) { // ó�� 5 ���� ���������� push�ǰ� ���� 5 ���� ���� full�� push ����
//		if (a.push(i)) cout << "push ����" << endl;
//		else cout << "���� full" << endl;
//	}
//
//	int n;
//	for (int i = 0; i < 10; i++) { // ó�� 5 ���� ���������� pop�ǰ� ���� 5 ���� ���� empty�� pop ����
//		if (a.pop(n)) cout << "pop ���� " << n << endl;
//		else cout << "���� empty" << endl;
//	}
//}


//Ÿ�� ���� = width x height x pi
//7��
//class Shape {
//protected:
//	string name; // ������ �̸�
//	int width, height; // ������ �����ϴ� �簢���� �ʺ�� ����
//public:
//	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
//	virtual double getArea() = 0; // dummy �� ����
//	string getName() { return name; } // �̸� ����
//};
//
//class Oval : public Shape {		//Shape Ŭ������ ��ӹ޴� Oval Ŭ���� ����
//public:
//	Oval(string n, int w, int h) : Shape(n, w, h){}		//�⺻Ŭ������ �����ڷ� �Ļ�Ŭ���� �ʱ�ȭ
//	double getArea() {
//		double pi = 3.14;
//		return width * height * pi;
//	}
//};
//
//class Rect : public Shape {		//Shape Ŭ������ ��ӹ޴� Rect Ŭ���� ����
//public:
//	Rect(string n, int w, int h) : Shape(n, w, h) {}		//�⺻Ŭ������ �����ڷ� �Ļ�Ŭ���� �ʱ�ȭ
//	double getArea() {
//		return width * height;
//	}
//};
//
//class Triangular : public Shape {		//Shape Ŭ������ ��ӹ޴� Triangular Ŭ���� ����
//public:
//	Triangular(string n, int w, int h) : Shape(n, w, h) {}		//�⺻Ŭ������ �����ڷ� �Ļ�Ŭ���� �ʱ�ȭ
//	double getArea() {
//		return (width * height) / 2;
//	}
//};
//
//int main() {
//	Shape* p[3];
//	p[0] = new Oval("��붱", 10, 20);
//	p[1] = new Rect("����", 30, 40);
//	p[2] = new Triangular("�佺Ʈ", 30, 40);
//	for (int i = 0; i < 3; i++)
//		cout << p[i]->getName() << " ���̴� " << p[i]->getArea() << endl;
//
//	for (int i = 0; i < 3; i++) delete p[i];
//}