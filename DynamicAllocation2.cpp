#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//2번
//int main() {
//	int *arr = new int[5];		//정수형 5개를 저장할 수 있는 공간 동적할당
//	int sum = 0;
//	double avg = 0;
//	cout << "정수 5개 입력 >> ";
//	for (int i = 0; i < 5; i++) {
//		cin >> arr[i];
//		sum += arr[i];
//	}
//	avg = (double)sum / 5.0;
//	cout << "평균 " << avg;
//}


//3번
//int main() {
//	string str;
//	int cnt = 0;
//	cout << "문자열 입력 >> ";
//	getline(cin, str, '\n');		//'\n'를 기준으로 str에 키보드로 문자열 입력
//	for (int i = 0; i < str.length();) {
//		int index = str.find('a', i);		//str에서 i부터 a를 찾아 인덱스 반환
//		if (index != -1) {
//			cnt++;
//			i = index + 1;
//		}
//		else
//			break;
//	}
//	cout << "문자 a는 " << cnt << "개 있습니다.";
//}

//5번
//int main() {
//	string str;
//	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다)" << endl;
//	while (true) {
//		srand((unsigned)time(0));		//난수생성
//		int n = rand();		//난수저장변수
//		cout << ">> ";
//		getline(cin, str, '\n');		//'\n'를 기준으로 str에 키보드로 문자열 입력
//		if (str == "exit") {
//			return 0;
//		}
//		str[n % str.length()] = ((n % 26) + 97);		//str문자열중에서 하나 랜덤 소문자로 변경
//		cout << str << endl;
//	}
//}


//7번
//class Circle {
//	int radius;
//public:
//	void setRadius(int radius) {
//		this->radius = radius;		//매개변수를 멤버변수에 대입
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
//		cout << "원 " << i + 1 << "의 반지름 >> ";
//		cin >> r;
//		circle[i].setRadius(r);
//		if (circle[i].getArea() > 100)
//			cnt++;
//	}
//	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다.";
//}


//8번
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
//	cout << "원의 개수 >> ";
//	cin >> n;
//	Circle *circle = new Circle[n];		//Circle타입을 n개만큼 저장할 수 있는 공간 동적할당
//	for (int i = 0; i < n; i++) {
//		cout << "원 " << i + 1 << "의 반지름 >> ";
//		cin >> r;
//		circle[i].setRadius(r);			//r로 반지름 설정
//		if (circle[i].getArea() > 100)		//면적이 100보다 클 경우 cnt++
//			cnt++;
//	}
//	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다.";
//}


//9번
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
//	void set(string name, string tel) {		//매개변수를 멤버변수에 대입
//		this->name = name;
//		this->tel = tel;
//	}
//};
//
//void func(string str, string *name, string *tel, int index) {
//	*name = str.substr(0, index);		//0부터 index인덱스까지 문자열 복사
//	*tel = str.substr(index + 1);		//index +1부터 끝까지 문자열 복사
//}
//
//int main() {
//	cout << "이름과 전화 번호를 입력해 주세요" << endl;
//	Person person[3];		//Person타입을 3개 저장할 수 있는 공간 동적할당
//	string str;
//	string *name = new string;		//string타입을 저장할 수있는 공간 동적할당
//	string *tel = new string;		//string타입을 저장할 수있는 공간 동적할당
//	for (int i = 0; i < 3; i++) {
//		cout << "사람 " << i + 1 << ">> ";
//		getline(cin, str, '\n');		//'\n'를 기준으로 str에 키보드로 문자열 입력
//		int index = str.find(' ');
//		func(str, name, tel, index);
//		person[i].set(*name, *tel);
//	}
//	cout << "모든 사람의 이름은 " << person[0].getName() << " " <<
//		person[1].getName() << " " <<  person[2].getName() << endl;
//	cout << "전화번호 검색합니다. 이름을 입력하세요 >> ";
//	cin >> *name;
//	cout << "전화 번호는 ";
//	for (int i = 0; i < 3; i++) {
//		if (person[i].getName() == *name) {
//			cout << person[i].getTel();		//전화번호 반환
//		}
//	}
//}

//10번	
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
//	Person *p;	//Person 배열 포인터
//	int size;	//Person 배열의 크기, 가족 구성원 수
//public :
//	Family(string name, int size) {	//size개수만큼 Person 배열 동적 생성
//		p = new Person[size];		
//		this->size = size;
//		this->name = name;
//	}
//	void show() {
//		cout << this->name << "가족은 다음과 같이 3명 입니다." << endl;
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
//	Family *simpson = new Family("Simpson", 3);	//3명으로 구성된 Simpson 가족
//	simpson->setName(0, "Mr. Simpson");
//	simpson->setName(1, "Mrs. Simpson");
//	simpson->setName(2, "Bart Simpson");
//	simpson->show();
//	delete simpson;
//}
//***힙에 할당된 데이터가 정상적으로 반환되지 않을 경우 프로그램이 종료되지 않음****