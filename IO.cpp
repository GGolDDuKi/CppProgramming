#include <iostream>	
#include <cstring>

using namespace std;		//std라는 네임스페이스를 가져옴
//2번 문제
/*
int main() {
	for (int i = 1; i < 10; i++) {		//구구단에서 뒤에 곱해지는 수
		for (int j = 1; j < 10; j++) {		//구구단에서 앞에 곱해지는 수
			cout << j << "x" << i << "=" << j * i << "  ";		//@x@=@를 출력
		}
		cout << endl;		//줄을 바꿈
	}
}
*/
//3번 문제
/*
int main() {
	int a, b = 0;		//정수를 입력받을 두 변수 선언, 초기화
	cout << "두 수를 입력하라 >> ";		//" "내용 출력
	cin >> a >> b;		//a,b의 값을 키보드로 입력받음
	if (a > b)		//a가 b보다 클 경우
		cout << "큰 수 = " << a;		//출력
	else		//a가 b보다 작거나 같을 경우
		cout << "큰 수 = " << b;		//출력
}
*/
//4번 문제
/*
int main() {		
	double arr[6] = { 0 };		//실수를 입력받을 실수형 배열 선언, 초기화
	cout << "5 개의 실수를 입력하라 >> ";		//출력
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];		//5개의 실수를 키보드로 입력받음
	double answer = arr[0];		//좌변에 우변을 대입
	for (int i = 0; i < 6; i++) {		//5번 반복문
		if (answer < arr[i]) {		//조건문
			answer = arr[i];		//좌변에 우변을 대입
		}
	}
	cout << "제일 큰 수 = " << answer;		//출력
}
*/
//5번 문제
/*
int main()
{
	int answer = 0;
	char arr[100] = { 0 };
	cout << "문자들을 입력하라(100개 미만).\n";		//출력
	cin.getline(arr, 100, '\n');		//엔터를 기준으로 문자열을 입력받음
	for (int i = 0; i < 100; i++) {		
		if (arr[i] == 'x')		//배열의 값이 x일 경우
			answer++;		//answer + 1
	}
	cout << "x의 개수는 " << answer;		//출력
}
*/
//6번 문제
/*
int main() {
	char first[100] = { 0 };		//첫 암호를 입력받을 char형 배열 선언, 초기화
	char second[100] = { 0 };		//두 번째 암호를 입력받을 char형 배열 선언, 초기화
	cout << "새 암호를 입력하세요 >> ";		//출력
	cin.getline(first, 100, '\n');		//엔터를 기준으로 문자열을 입력 받음
	cout << "새 암호를 다시 한 번 입력하세요 >>";		//출력
	cin.getline(second, 100, '\n');		//엔터를 기준으로 문자열을 입력 받음
	if (strcmp(first, second))		//first와 second 배열을 비교해 같으면 0반환
		cout << "같지 않습니다";		//출력
	else
		cout << "같습니다";		//출력
}
*/
//7번 문제
/*
int main() {
	char answer[4] = "yes";		//yes라는 문자열의 배열
	char arr[100] = { 0 };		//배열 선언, 초기화
	while (true) {		//무한반복
		cout << "종료하고싶으면 yes를 입력하세요 >> ";		//출력
		cin.getline(arr, 100, '\n');		//엔터를 기준으로 문자열을 입력 받음
		if (strcmp(answer, arr) == 0) {		//answer와 arr을 비교, 0인지 확인
			cout << "종료합니다...";		//출력
			return 0;		//종료
		}
	}
}
*/
//8번 문제
/*
int main() {
	char wholong[100] = { 0 };		//긴 이름을 담을 배열
	char name[100] = { 0 };		//이름을 입력받을 배열
	int length = 0;		//이름의 길이를 저장할 정수형 변수
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n>>";		//출력
	int num = 1;		//몇 번째 사람인지 표현할 정수형 변수
	for (int i = 0; i < 5; i++) {		
		cin.getline(name, 100, ';');		//;를 기준으로 문자열을 입력받음
		cout << num << " : " << name << endl;		//출력
		if (length < strlen(name)) {		//length변수의 값보다 name배열의 길이가 클 경우
			length = strlen(name);		//좌변에 우변을 대입
			strcpy_s(wholong, name);		//wholong 문자열에 name 문자열을 복사
		}
		num++;		//num + 1
	}
	cout << "가장 긴 이름은 " << wholong;		//출력
}
*/