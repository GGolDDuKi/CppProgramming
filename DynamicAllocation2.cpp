#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//2��
//int main() {
//	int *arr = new int[5];		//������ 5���� ������ �� �ִ� ���� �����Ҵ�
//	int sum = 0;
//	double avg = 0;
//	cout << "���� 5�� �Է� >> ";
//	for (int i = 0; i < 5; i++) {
//		cin >> arr[i];
//		sum += arr[i];
//	}
//	avg = (double)sum / 5.0;
//	cout << "��� " << avg;
//}


//3��
//int main() {
//	string str;
//	int cnt = 0;
//	cout << "���ڿ� �Է� >> ";
//	getline(cin, str, '\n');		//'\n'�� �������� str�� Ű����� ���ڿ� �Է�
//	for (int i = 0; i < str.length();) {
//		int index = str.find('a', i);		//str���� i���� a�� ã�� �ε��� ��ȯ
//		if (index != -1) {
//			cnt++;
//			i = index + 1;
//		}
//		else
//			break;
//	}
//	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�.";
//}

//5��
//int main() {
//	string str;
//	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�)" << endl;
//	while (true) {
//		srand((unsigned)time(0));		//��������
//		int n = rand();		//�������庯��
//		cout << ">> ";
//		getline(cin, str, '\n');		//'\n'�� �������� str�� Ű����� ���ڿ� �Է�
//		if (str == "exit") {
//			return 0;
//		}
//		str[n % str.length()] = ((n % 26) + 97);		//str���ڿ��߿��� �ϳ� ���� �ҹ��ڷ� ����
//		cout << str << endl;
//	}
//}


//7��
//class Circle {
//	int radius;
//public:
//	void setRadius(int radius) {
//		this->radius = radius;		//�Ű������� ��������� ����
//	}
//	double getArea() {
//		return 3.14 * (double)radius * (double)radius;
//	}
//};
//
//int main() {
//	Circle circle[3];
//	int r = 0, cnt = 0;
//	for (int i = 0; i < 3; i++) {
//		cout << "�� " << i + 1 << "�� ������ >> ";
//		cin >> r;
//		circle[i].setRadius(r);
//		if (circle[i].getArea() > 100)
//			cnt++;
//	}
//	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�.";
//}


//8��
//class Circle {
//	int radius;
//public:
//	void setRadius(int radius) {
//		this->radius = radius;
//	}
//	double getArea() {
//		return 3.14 * (double)radius * (double)radius;
//	}
//};
//
//int main() {
//	int n = 0, r = 0, cnt = 0;
//	cout << "���� ���� >> ";
//	cin >> n;
//	Circle *circle = new Circle[n];		//CircleŸ���� n����ŭ ������ �� �ִ� ���� �����Ҵ�
//	for (int i = 0; i < n; i++) {
//		cout << "�� " << i + 1 << "�� ������ >> ";
//		cin >> r;
//		circle[i].setRadius(r);			//r�� ������ ����
//		if (circle[i].getArea() > 100)		//������ 100���� Ŭ ��� cnt++
//			cnt++;
//	}
//	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�.";
//}


//9��
//class Person {
//	string name;
//	string tel;
//public:
//	Person() {
//		name = "";
//		tel = "";
//	}
//	string getName() { return name; }
//	string getTel() { return tel; }
//	void set(string name, string tel) {		//�Ű������� ��������� ����
//		this->name = name;
//		this->tel = tel;
//	}
//};
//
//void func(string str, string *name, string *tel, int index) {
//	*name = str.substr(0, index);		//0���� index�ε������� ���ڿ� ����
//	*tel = str.substr(index + 1);		//index +1���� ������ ���ڿ� ����
//}
//
//int main() {
//	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
//	Person person[3];		//PersonŸ���� 3�� ������ �� �ִ� ���� �����Ҵ�
//	string str;
//	string *name = new string;		//stringŸ���� ������ ���ִ� ���� �����Ҵ�
//	string *tel = new string;		//stringŸ���� ������ ���ִ� ���� �����Ҵ�
//	for (int i = 0; i < 3; i++) {
//		cout << "��� " << i + 1 << ">> ";
//		getline(cin, str, '\n');		//'\n'�� �������� str�� Ű����� ���ڿ� �Է�
//		int index = str.find(' ');
//		func(str, name, tel, index);
//		person[i].set(*name, *tel);
//	}
//	cout << "��� ����� �̸��� " << person[0].getName() << " " <<
//		person[1].getName() << " " <<  person[2].getName() << endl;
//	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ��� >> ";
//	cin >> *name;
//	cout << "��ȭ ��ȣ�� ";
//	for (int i = 0; i < 3; i++) {
//		if (person[i].getName() == *name) {
//			cout << person[i].getTel();		//��ȭ��ȣ ��ȯ
//		}
//	}
//}

//10��	
//class Person {
//	string name;
//public:
//	Person() {
//		name = "";
//	}
//	Person(string name) { this->name = name; }
//	string getName() { return name; }
//	void Name(string name) {
//		this->name = name;
//	}
//};
//
//class Family {
//	string name;
//	Person *p;	//Person �迭 ������
//	int size;	//Person �迭�� ũ��, ���� ������ ��
//public :
//	Family(string name, int size) {	//size������ŭ Person �迭 ���� ����
//		p = new Person[size];		
//		this->size = size;
//		this->name = name;
//	}
//	void show() {
//		cout << this->name << "������ ������ ���� 3�� �Դϴ�." << endl;
//		for (int i = 0; i < size; i++)
//			cout << p[i].getName() << "  ";
//		cout << endl;
//	}
//	void setName(int index, string name) {
//		(p + index)->Name(name);
//	}
//	~Family() {
//		delete[] p;
//		p = nullptr;
//	}
//};
//
//int main() {
//	Family *simpson = new Family("Simpson", 3);	//3������ ������ Simpson ����
//	simpson->setName(0, "Mr. Simpson");
//	simpson->setName(1, "Mrs. Simpson");
//	simpson->setName(2, "Bart Simpson");
//	simpson->show();
//	delete simpson;
//}
//***���� �Ҵ�� �����Ͱ� ���������� ��ȯ���� ���� ��� ���α׷��� ������� ����****