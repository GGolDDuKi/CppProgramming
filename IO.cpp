#include <iostream>	
#include <cstring>

using namespace std;		//std��� ���ӽ����̽��� ������
//2�� ����
/*
int main() {
	for (int i = 1; i < 10; i++) {		//�����ܿ��� �ڿ� �������� ��
		for (int j = 1; j < 10; j++) {		//�����ܿ��� �տ� �������� ��
			cout << j << "x" << i << "=" << j * i << "  ";		//@x@=@�� ���
		}
		cout << endl;		//���� �ٲ�
	}
}
*/
//3�� ����
/*
int main() {
	int a, b = 0;		//������ �Է¹��� �� ���� ����, �ʱ�ȭ
	cout << "�� ���� �Է��϶� >> ";		//" "���� ���
	cin >> a >> b;		//a,b�� ���� Ű����� �Է¹���
	if (a > b)		//a�� b���� Ŭ ���
		cout << "ū �� = " << a;		//���
	else		//a�� b���� �۰ų� ���� ���
		cout << "ū �� = " << b;		//���
}
*/
//4�� ����
/*
int main() {		
	double arr[6] = { 0 };		//�Ǽ��� �Է¹��� �Ǽ��� �迭 ����, �ʱ�ȭ
	cout << "5 ���� �Ǽ��� �Է��϶� >> ";		//���
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];		//5���� �Ǽ��� Ű����� �Է¹���
	double answer = arr[0];		//�º��� �캯�� ����
	for (int i = 0; i < 6; i++) {		//5�� �ݺ���
		if (answer < arr[i]) {		//���ǹ�
			answer = arr[i];		//�º��� �캯�� ����
		}
	}
	cout << "���� ū �� = " << answer;		//���
}
*/
//5�� ����
/*
int main()
{
	int answer = 0;
	char arr[100] = { 0 };
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";		//���
	cin.getline(arr, 100, '\n');		//���͸� �������� ���ڿ��� �Է¹���
	for (int i = 0; i < 100; i++) {		
		if (arr[i] == 'x')		//�迭�� ���� x�� ���
			answer++;		//answer + 1
	}
	cout << "x�� ������ " << answer;		//���
}
*/
//6�� ����
/*
int main() {
	char first[100] = { 0 };		//ù ��ȣ�� �Է¹��� char�� �迭 ����, �ʱ�ȭ
	char second[100] = { 0 };		//�� ��° ��ȣ�� �Է¹��� char�� �迭 ����, �ʱ�ȭ
	cout << "�� ��ȣ�� �Է��ϼ��� >> ";		//���
	cin.getline(first, 100, '\n');		//���͸� �������� ���ڿ��� �Է� ����
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ��� >>";		//���
	cin.getline(second, 100, '\n');		//���͸� �������� ���ڿ��� �Է� ����
	if (strcmp(first, second))		//first�� second �迭�� ���� ������ 0��ȯ
		cout << "���� �ʽ��ϴ�";		//���
	else
		cout << "�����ϴ�";		//���
}
*/
//7�� ����
/*
int main() {
	char answer[4] = "yes";		//yes��� ���ڿ��� �迭
	char arr[100] = { 0 };		//�迭 ����, �ʱ�ȭ
	while (true) {		//���ѹݺ�
		cout << "�����ϰ������ yes�� �Է��ϼ��� >> ";		//���
		cin.getline(arr, 100, '\n');		//���͸� �������� ���ڿ��� �Է� ����
		if (strcmp(answer, arr) == 0) {		//answer�� arr�� ��, 0���� Ȯ��
			cout << "�����մϴ�...";		//���
			return 0;		//����
		}
	}
}
*/
//8�� ����
/*
int main() {
	char wholong[100] = { 0 };		//�� �̸��� ���� �迭
	char name[100] = { 0 };		//�̸��� �Է¹��� �迭
	int length = 0;		//�̸��� ���̸� ������ ������ ����
	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";		//���
	int num = 1;		//�� ��° ������� ǥ���� ������ ����
	for (int i = 0; i < 5; i++) {		
		cin.getline(name, 100, ';');		//;�� �������� ���ڿ��� �Է¹���
		cout << num << " : " << name << endl;		//���
		if (length < strlen(name)) {		//length������ ������ name�迭�� ���̰� Ŭ ���
			length = strlen(name);		//�º��� �캯�� ����
			strcpy_s(wholong, name);		//wholong ���ڿ��� name ���ڿ��� ����
		}
		num++;		//num + 1
	}
	cout << "���� �� �̸��� " << wholong;		//���
}
*/