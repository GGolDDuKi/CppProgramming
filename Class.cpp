#include <iostream>
#include <cstdlib>
#include <ctime>
#include <memory>
#include <cstring>
#include <string>

using namespace std;

//1�� ����
/*
class Tower {		//Tower Ŭ���� ����
private:		//ĸ��ȭ
	int Height;			//���̸� ������ ���� ����
public:
	Tower();			//�⺻������
	Tower(int n);			//�Ű������� ����n�� �޴� ������
	int getHeight();			//�������� ��ȯ�ϴ� ����Լ�
};

Tower::Tower() {
	Height = 1;
}
Tower::Tower(int n) {
	Height = n;
}

int Tower::getHeight() {
	return Height;
}

int main() {
	Tower myTower;		//1����
	Tower seoulTower(100);		//100����
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}
*/

//3�� ����
/*
class Account {			//Account Ŭ���� ����
private:			//ĸ��ȭ
	string name;			//string Ŭ������ ��ü name����
	int id;			//������� id
	int total;			//������� total
public:
	Account();			//�⺻������
	Account(string _name, int _id, int _total);			//�Ű������� �޴� ������
	void deposit(int money);			//��ȯ���� ���� ����Լ�
	string getOwner();				//string���� ��ȯ�ϴ� ����Լ�
	int inquiry();				//int���� ��ȯ�ϴ� ����Լ�
	int withdraw(int money);				//int���� ��ȯ�ϴ� ����Լ�
};

Account::Account() {
	name = "";		//������� name �ʱ�ȭ
	id = 0; total = 0;			//������� id, total �ʱ�ȭ
}
Account::Account(string _name, int _id, int _total) {
	name = _name;			//������� name�� �Ű����� _name �Է�
	id = _id; total = _total;			//������� id, total�� �Ű����� _id, _total �Է�
}

void Account::deposit(int money) { total += money; }		//������� total�� �Ű����� money�� ���ϴ� ����Լ�
string Account::getOwner() { return name; }			//������� name�� ��ȯ�ϴ� ����Լ�
int Account::inquiry() { return total; }			//������� total�� ��ȯ�ϴ� ����Լ�
int Account::withdraw(int money) {				//������� total�� money�� ���� total�� ��ȯ�ϴ� ����Լ�
	total -= money;
	return total;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);			//����Լ� depositȣ��
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);			//����Լ� withdrawȣ��
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}
*/

//4�� ����
/*
class CoffeeMachine {			//Ŭ���� ����
private:			//ĸ��ȭ
	int coffee;			//�������
	int water;
	int sugar;
public:
	CoffeeMachine();			//�⺻������
	CoffeeMachine(int _coffee, int _water, int _sugar);			//�Ű������� ������ ������
	void drinkEspresso();			//��ȯ���� ���� ����Լ�
	void drinkAmericano();			//��ȯ���� ���� ����Լ�
	void drinkSugarCoffee();		//��ȯ���� ���� ����Լ�
	void show();			//��ȯ���� ���� ����Լ�
	void fill();			//��ȯ���� ���� ����Լ�
};

CoffeeMachine::CoffeeMachine() { coffee = 0; water = 0; sugar = 0; }		//������ ����
CoffeeMachine::CoffeeMachine(int _coffee, int _water, int _sugar) {			//������ ����
	coffee = _coffee; water = _water; sugar = _sugar;
}

void CoffeeMachine::drinkEspresso() { coffee -= 1; water -= 1; }			//Ŭ���� ����
void CoffeeMachine::drinkAmericano() { coffee -= 1; water -= 2; }			//Ŭ���� ����
void CoffeeMachine::drinkSugarCoffee() { coffee -= 1; water -= 2; sugar -= 1; }		//Ŭ���� ����
void CoffeeMachine::show() {			//Ŭ���� ����
	cout << "Ŀ�� �ӽ� ���� , Ŀ�� : " << coffee << " �� : " << water << " ���� : " << sugar << endl;
}
void CoffeeMachine::fill() { coffee = 10; water = 10; sugar = 10; }			//Ŭ���� ����

int main() {
	CoffeeMachine java(5, 10, 3);		//CoffeeMachineŸ���� ������ java��ü ����
	java.drinkEspresso();			//����Լ� ȣ��
	java.show();			//����Լ� ȣ��
	java.drinkAmericano();			//����Լ� ȣ��
	java.show();			//����Լ� ȣ��
	java.drinkSugarCoffee();		//����Լ� ȣ��
	java.show();			//����Լ� ȣ��
	java.fill();			//����Լ� ȣ��
	java.show();			//����Լ� ȣ��
}
*/

//5�� ����
/*
class Random {			//Ŭ���� ����
public:		
	Random();		//�⺻ ������
	int next();			//����Լ�
	int nextInRange(int _min, int _max);		//����Լ�
};

Random::Random() {		//�⺻������
	srand((unsigned)time(NULL));		//�����߻�
}

int Random::next()			//Ŭ���� ����
{
	int min = 0; int max = RAND_MAX;
	int range = max - min + 1;
	int r = rand() % range + min;
	return r;
}
int Random::nextInRange(int _min, int _max) {			//Ŭ���� ����
	int min = _min; int max = _max;
	int range = max - min + 1;
	int r = rand() % range + min;
	return r;
}

int main() {
	Random r;			//RandomŸ���� ������ ��ü r����
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();			//����Լ� ȣ��
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);			//����Լ� ȣ��
		cout << n << ' ';
	}
	cout << endl;
}
*/

//6�� ����
/*
class EvenRandom {			//Ŭ���� ����
public:
	EvenRandom();		//�⺻������
	int next();			//����Լ�
	int nextInRange(int _min, int _max);			//����Լ�
};

EvenRandom::EvenRandom() {			//�⺻������ �Լ� ����
	srand((unsigned)time(NULL));			//���� �߻�
}

int EvenRandom::next()			//����Լ� ����
{
	int min = 0; int max = RAND_MAX;
	int range = max - min + 1;
	while (true) {			//���ѷ���
		int r = rand() % range + min;			
		if (r % 2 == 0)
			return r;
	}
}
int EvenRandom::nextInRange(int _min, int _max) {			//����Լ� ����
	int min = _min; int max = _max;
	int range = max - min + 1;
	while (true) {			//���ѷ���
		int r = rand() % range + min;
		if (r % 2 == 0)
			return r;
	}
}

int main() 
{
	EvenRandom r;			//EvenRandomŸ���� ������ ��ü r ����
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();			//����Լ� next ȣ��
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);			//����Լ� nextInRange ȣ��
		cout << n << ' ';
	}
	cout << endl;
}
*/

//7�� ����
/*
class SelecttableRandom {			//Ŭ���� ����
private:			//ĸ��ȭ
	bool select;			//������� ����
public:
	SelecttableRandom();			//�⺻������ ����
	SelecttableRandom(bool _select);			//�Ű������� ������ ������ ����
	int next();			//����Լ� ����
	int nextInRange(int _min, int _max);			//����Լ� ����
};

SelecttableRandom::SelecttableRandom() {		//�⺻������ �Լ� ����
	srand((unsigned)time(NULL));			//�����߻�
	select = true;
}
SelecttableRandom::SelecttableRandom(bool _select) {		//������ �Լ� ����
	srand((unsigned)time(NULL));			//�����߻�
	select = _select;
}

int SelecttableRandom::next()			//����Լ� ����
{
	int min = 0; int max = RAND_MAX;
	int range = max - min + 1;
	if (select == true) {
		while (true) {			//���ѷ���
			int r = rand() % range + min;
			if (r % 2 == 0)
				return r;
		}
	}
	else {
		while (true) {			//���ѷ���
			int r = rand() % range + min;
			if (r % 2 == 1)
				return r;
		}
	}
}
int SelecttableRandom::nextInRange(int _min, int _max) {			//����Լ� ����
	int min = _min; int max = _max;
	int range = max - min + 1;
	if (select == true) {
		while (true) {			//���ѷ���
			int r = rand() % range + min;
			if (r % 2 == 0)
				return r;
		}
	}
	else {
		while (true) {			//���ѷ���
			int r = rand() % range + min;
			if (r % 2 == 1)
				return r;
		}
	}
}
int main() 
{
	SelecttableRandom evenRandom;	 // ¦�� �����߻���
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = evenRandom.next();	 // 0���� RAND_MAX(32767) ������ ������ ¦�� ����
		cout << n << ' ';
	}
	SelecttableRandom oddRandom(false);	 // Ȧ�� �����߻���
	cout << endl << endl << "-- 2���� " << "9 ������ ���� Ȧ�� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = oddRandom.nextInRange(2, 9);	// 2���� 9 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
}
*/

//���� �߻� ���� �ڵ�
//int RangedRand(int min, int max)
//{
//	int range = max - min + 1;
//	int r = rand() % range + min;
//	return r;
//}
//int main()
//{
//	srand((unsigned)time(NULL));	 // �����ڿ��� ȣ��@@@@@@@@@@@@@
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << RangedRand(1, 46) << endl;
//	}
//}