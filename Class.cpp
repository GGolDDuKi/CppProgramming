#include <iostream>
#include <cstdlib>
#include <ctime>
#include <memory>
#include <cstring>
#include <string>

using namespace std;

//1번 문제
/*
class Tower {		//Tower 클래스 선언
private:		//캡슐화
	int Height;			//높이를 저장할 변수 선언
public:
	Tower();			//기본생성자
	Tower(int n);			//매개변수로 정수n을 받는 생성자
	int getHeight();			//정수형을 반환하는 멤버함수
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
	Tower myTower;		//1미터
	Tower seoulTower(100);		//100미터
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}
*/

//3번 문제
/*
class Account {			//Account 클래스 선언
private:			//캡슐화
	string name;			//string 클래스의 객체 name선언
	int id;			//멤버변수 id
	int total;			//멤버변수 total
public:
	Account();			//기본생성자
	Account(string _name, int _id, int _total);			//매개변수를 받는 생성자
	void deposit(int money);			//반환값이 없는 멤버함수
	string getOwner();				//string값을 반환하는 멤버함수
	int inquiry();				//int형을 반환하는 멤버함수
	int withdraw(int money);				//int형을 반환하는 멤버함수
};

Account::Account() {
	name = "";		//멤버변수 name 초기화
	id = 0; total = 0;			//멤버변수 id, total 초기화
}
Account::Account(string _name, int _id, int _total) {
	name = _name;			//멤버변수 name에 매개변수 _name 입력
	id = _id; total = _total;			//멤버변수 id, total에 매개변수 _id, _total 입력
}

void Account::deposit(int money) { total += money; }		//멤버변수 total에 매개변수 money를 더하는 멤버함수
string Account::getOwner() { return name; }			//멤버변수 name을 반환하는 멤버함수
int Account::inquiry() { return total; }			//멤버변수 total을 반환하는 멤버함수
int Account::withdraw(int money) {				//멤버변수 total에 money를 빼고 total을 반환하는 멤버함수
	total -= money;
	return total;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);			//멤버함수 deposit호출
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);			//멤버함수 withdraw호출
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}
*/

//4번 문제
/*
class CoffeeMachine {			//클래스 선언
private:			//캡슐화
	int coffee;			//멤버변수
	int water;
	int sugar;
public:
	CoffeeMachine();			//기본생성자
	CoffeeMachine(int _coffee, int _water, int _sugar);			//매개변수를 가지는 생성자
	void drinkEspresso();			//반환값이 없는 멤버함수
	void drinkAmericano();			//반환값이 없는 멤버함수
	void drinkSugarCoffee();		//반환값이 없는 멤버함수
	void show();			//반환값이 없는 멤버함수
	void fill();			//반환값이 없는 멤버함수
};

CoffeeMachine::CoffeeMachine() { coffee = 0; water = 0; sugar = 0; }		//생성자 구현
CoffeeMachine::CoffeeMachine(int _coffee, int _water, int _sugar) {			//생성자 구현
	coffee = _coffee; water = _water; sugar = _sugar;
}

void CoffeeMachine::drinkEspresso() { coffee -= 1; water -= 1; }			//클래스 구현
void CoffeeMachine::drinkAmericano() { coffee -= 1; water -= 2; }			//클래스 구현
void CoffeeMachine::drinkSugarCoffee() { coffee -= 1; water -= 2; sugar -= 1; }		//클래스 구현
void CoffeeMachine::show() {			//클래스 구현
	cout << "커피 머신 상태 , 커피 : " << coffee << " 물 : " << water << " 설탕 : " << sugar << endl;
}
void CoffeeMachine::fill() { coffee = 10; water = 10; sugar = 10; }			//클래스 구현

int main() {
	CoffeeMachine java(5, 10, 3);		//CoffeeMachine타입을 가지는 java객체 선언
	java.drinkEspresso();			//멤버함수 호출
	java.show();			//멤버함수 호출
	java.drinkAmericano();			//멤버함수 호출
	java.show();			//멤버함수 호출
	java.drinkSugarCoffee();		//멤버함수 호출
	java.show();			//멤버함수 호출
	java.fill();			//멤버함수 호출
	java.show();			//멤버함수 호출
}
*/

//5번 문제
/*
class Random {			//클래스 선언
public:		
	Random();		//기본 생성자
	int next();			//멤버함수
	int nextInRange(int _min, int _max);		//멤버함수
};

Random::Random() {		//기본생성자
	srand((unsigned)time(NULL));		//난수발생
}

int Random::next()			//클래스 구현
{
	int min = 0; int max = RAND_MAX;
	int range = max - min + 1;
	int r = rand() % range + min;
	return r;
}
int Random::nextInRange(int _min, int _max) {			//클래스 구현
	int min = _min; int max = _max;
	int range = max - min + 1;
	int r = rand() % range + min;
	return r;
}

int main() {
	Random r;			//Random타입을 가지는 객체 r선언
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();			//멤버함수 호출
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);			//멤버함수 호출
		cout << n << ' ';
	}
	cout << endl;
}
*/

//6번 문제
/*
class EvenRandom {			//클래스 선언
public:
	EvenRandom();		//기본생성자
	int next();			//멤버함수
	int nextInRange(int _min, int _max);			//멤버함수
};

EvenRandom::EvenRandom() {			//기본생성자 함수 구현
	srand((unsigned)time(NULL));			//난수 발생
}

int EvenRandom::next()			//멤버함수 구현
{
	int min = 0; int max = RAND_MAX;
	int range = max - min + 1;
	while (true) {			//무한루프
		int r = rand() % range + min;			
		if (r % 2 == 0)
			return r;
	}
}
int EvenRandom::nextInRange(int _min, int _max) {			//멤버함수 구현
	int min = _min; int max = _max;
	int range = max - min + 1;
	while (true) {			//무한루프
		int r = rand() % range + min;
		if (r % 2 == 0)
			return r;
	}
}

int main() 
{
	EvenRandom r;			//EvenRandom타입을 가지는 객체 r 선언
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();			//멤버함수 next 호출
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);			//멤버함수 nextInRange 호출
		cout << n << ' ';
	}
	cout << endl;
}
*/

//7번 문제
/*
class SelecttableRandom {			//클래스 선언
private:			//캡슐화
	bool select;			//멤버변수 선언
public:
	SelecttableRandom();			//기본생성자 선언
	SelecttableRandom(bool _select);			//매개변수를 가지는 생성자 선언
	int next();			//멤버함수 선언
	int nextInRange(int _min, int _max);			//멤버함수 선언
};

SelecttableRandom::SelecttableRandom() {		//기본생성자 함수 구현
	srand((unsigned)time(NULL));			//난수발생
	select = true;
}
SelecttableRandom::SelecttableRandom(bool _select) {		//생성자 함수 구현
	srand((unsigned)time(NULL));			//난수발생
	select = _select;
}

int SelecttableRandom::next()			//멤버함수 구현
{
	int min = 0; int max = RAND_MAX;
	int range = max - min + 1;
	if (select == true) {
		while (true) {			//무한루프
			int r = rand() % range + min;
			if (r % 2 == 0)
				return r;
		}
	}
	else {
		while (true) {			//무한루프
			int r = rand() % range + min;
			if (r % 2 == 1)
				return r;
		}
	}
}
int SelecttableRandom::nextInRange(int _min, int _max) {			//멤버함수 구현
	int min = _min; int max = _max;
	int range = max - min + 1;
	if (select == true) {
		while (true) {			//무한루프
			int r = rand() % range + min;
			if (r % 2 == 0)
				return r;
		}
	}
	else {
		while (true) {			//무한루프
			int r = rand() % range + min;
			if (r % 2 == 1)
				return r;
		}
	}
}
int main() 
{
	SelecttableRandom evenRandom;	 // 짝수 랜덤발생기
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = evenRandom.next();	 // 0에서 RAND_MAX(32767) 사이의 랜덤한 짝수 정수
		cout << n << ' ';
	}
	SelecttableRandom oddRandom(false);	 // 홀수 랜덤발생기
	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = oddRandom.nextInRange(2, 9);	// 2에서 9 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl;
}
*/

//난수 발생 예제 코드
//int RangedRand(int min, int max)
//{
//	int range = max - min + 1;
//	int r = rand() % range + min;
//	return r;
//}
//int main()
//{
//	srand((unsigned)time(NULL));	 // 생성자에서 호출@@@@@@@@@@@@@
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << RangedRand(1, 46) << endl;
//	}
//}