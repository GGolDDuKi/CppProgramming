#include <iostream>

using namespace std;


//1번
//int main() {
//	int n = 0;
//	while (true) {
//		cout << "정수의 수 입력 : ";
//		cin >> n;
//		if (n <= 0) {		//0이하의 수를 입력받으면 종료
//			cout << "종료";
//			return 0;
//		}
//		int* arr = new int[n] {0};		//n개의 int값을 입력받는 배열 동적할당
//		if (!arr) {		//동적할당 검사
//			cout << "메모리가 할당되지 않았습니다.";
//			return 0;
//		}
//		cout << "정수 " << n << "개 입력" << endl;
//		for (int i = 0; i < n; i++) {			//배열의 크기만큼 반복하여 원소값 입력
//			cout << "배열 " << i + 1 << "번째 원소 입력 : ";
//			cin >> arr[i];
//		}
//		cout << "입력된 정수 출력" << endl;
//		for (int i = 0; i < n; i++) {			//배열의 크기만큼 반복하여 원소값 출력
//			cout << "	 " << arr[i];
//		}
//
//		cout << endl;
//
//		cout << "입력된 정수 역 출력" << endl;
//		for (int i = n - 1; i >= 0; i--) {			//배열의 크기의 역으로 반복하여 원소값 출력
//			cout << "	 " << arr[i];
//		}
//
//		cout << endl;
//
//		delete arr;			//동적할당한 메모리 반환
//		arr = nullptr;			//저장되어있던 메모리 주소값 null로 변경
//	}
//}


//2번
//int main() {
//	int n = 0;
//	while (true) {
//		cout << "실수의 수 입력 : ";
//		cin >> n;
//
//		if (n <= 0) {		//0이하의 수를 입력받으면 종료
//			cout << "종료";
//			return 0;
//		}
//
//		double* arr = new double[n] {0};		//double값을 n개를 저장하는 배열 동적할당
//		if (!arr) {		//동적할당 검사
//			cout << "메모리가 할당되지 않았습니다.";
//			return 0;
//		}
//		cout << "실수 " << n << "개 입력" << endl;
//		for (int i = 0; i < n; i++) {			//배열의 크기만큼 반복하여 원소값 입력
//			cout << "배열 " << i + 1 << "번째 원소 입력 : ";
//			cin >> arr[i];
//		}
//		double min = arr[0], max = arr[0];
//		cout << "입력된 실수" << endl;
//		for (int i = 0; i < n; i++) {			//배열의 크기만큼 반복하여 원소값 출력
//			cout << "	 " << arr[i];
//			if (arr[i] < min)			//입력한 값이 min보다 작을 경우 min에 arr[i]를 입력
//				min = arr[i];
//			else if (arr[i] > max)			//입력한 값이 max보다 클 경우 max에 arr[i]를 입력
//				max = arr[i];
//		}
//		cout << endl << "가장 큰 실수 " << max << " 가장 작은 실수 " << min << endl;
//
//		delete arr;		//할당한 메모리 반환
//		arr = nullptr;			//저장되어있던 메모리 주소값 null로 초기화
//	}
//}


//3번
//int main() {
//	int n = 0;
//	while (true) {			//무한루프
//		cout << "정수의 수 입력 : ";
//		cin >> n;			//변수 n에 정수값 저장
//		if (n <= 0) {			//0이하의 값을 입력받을 경우 프로그램 종료
//			cout << "종료";
//			return 0;
//		}
//		cout << "정수 " << n << "개 입력" << endl;
//
//		int* arr = new int[n] {0};			//정수값 n개를 저장하는 배열 동적할당
//		if (!arr) {				//동적할당이 제대로 되지 않았을 경우 프로그램 종료
//			cout << "메모리가 할당되지 않았습니다";
//			return 0;
//		}
//		for (int i = 0; i < n; i++) {			//배열의 크기만큼 반복하며 원소값 입력
//			cout << "배열의 arr[" << i << "] 입력 : ";
//			cin >> arr[i];
//		}
//		cout << "정렬 전" << endl;
//		for (int i = 0; i < n; i++) {			//배열의 원소 출력
//			cout << " " << arr[i];
//		}
//		cout << endl;
//
//		for (int i = 0; i < n; i++) {			//첫번째 원소부터 다음원소와 값을 비교하며 정렬
//			for (int j = 0; j < n - 1; j++) {			//마지막 원소는 n-1일때 비교가 끝나기 때문에 n-1까지 반복
//				if (arr[j] > arr[j + 1]) {
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//		cout << "정렬 후" << endl;
//		for (int i = 0; i < n; i++) {			//배열의 크기만큼 반복하여 원소 출력
//			cout << " " << arr[i];
//		}
//		cout << endl;
//		delete arr;			//동적할당한 메모리 반환
//		arr = nullptr;			//저장되어있던 메모리 주소값 null로 변경
//	}
//}

//4번
//int main() {
//	int v = 0, h = 0;
//	while (true) {			//무한 루프
//		cout << "행렬의 크기 입력 : ";
//		cin >> h >> v;
//		if (h <= 0 || v <= 0) {			//행렬의 행과 열의 값으로 0 이하가 입력되면 프로그램 종료
//			cout << "종료";
//			return 0;
//		}
//
//		int** arr = new int*[h] {0};			
//		for (int i = 0; i < h; i++)			//2차원 배열 동적할당
//			arr[i] = new int[v] {0};
//
//		if (!arr) {			//동적할당 검사
//			cout << "메모리가 할당되지 않았습니다.";
//			return 0;
//		}
//
//		for (int i = 0; i < h; i++) {			//2차원 배열의 행만큼 반복
//			for (int j = 0; j < v; j++) {			//2차원 배열의 열만큼 반복
//				cout << i + 1 << " 행 " << j + 1 << " 열 원소 입력 : ";
//				cin >> *(*(arr + i) + j);			//i행 j열에 원소값 입력
//			}
//		}
//		cout << endl << " 입력된 행렬" << endl;
//
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < v; j++) {
//				cout << " " << *(*(arr + i) + j);			//i행 j열의 원소값 출력
//			}
//			cout << endl;
//		}
//		for (int i = 0; i < h; i++) {			//동적할당 메모리 반환
//			delete[] arr[i];			//힙영역의 2차원 배열에서 각 행의 시작주소를 반환
//			arr[i] = nullptr;		//각 행의 시작주소를 가진 2차원 배열의 값을 null로 변경
//		}
//		delete[] arr;			//힙영역 2차원 배열 반환
//		arr = nullptr;			//스택영역에서 힙영역의 2차원 배열의 주소를 가졌던 arr의 값을 null로 변경
//	}
//}


//5번
//int main() {
//	int v1 = 0, h1 = 0, v2 = 0, h2 = 0;
//	while (true) {			//무한 루프
//		cout << "행렬의 덧셈 뺄셈 연산" << endl;
//		cout << "행렬 A의 크기 입력 : ";
//		cin >> h1 >> v1;
//		cout << "행렬 B의 크기 입력 : ";
//		cin >> h2 >> v2;
//		if (h1 <= 0 || v1 <= 0 || h2 <= 0 || v2 <= 0) {			//행렬의 행과 열의 값으로 0 이하가 입력되면 프로그램 종료
//			cout << "종료";
//			return 0;
//		}
//		if (h1 != h2 || v1 != v2) {			//두 행렬의 열의 크기 또는 행의 크기가 다를 경우 프로그램 종료
//			cout << "행렬의 덧셈과 뺄셈을 할 수 없습니다." << endl << "종료";
//			return 0;
//		}
//
//		//2차원 배열 동적할당 하기
//		int** arrA = new int*[h1] {0};			//배열을 저장할 행 할당
//		int** arrB = new int*[h2] {0};			//배열을 저장할 행 할당
//		int** arrC = new int*[h2] {0};			//배열을 저장할 행 할당
//		for (int i = 0; i < h1; i++)			
//			arrA[i] = new int[v1] {0};			//각 행에 들어갈 배열 할당
//		for (int i = 0; i < h2; i++)			
//			arrB[i] = new int[v2] {0};			//각 행에 들어갈 배열 할당
//		for (int i = 0; i < h2; i++)				
//			arrC[i] = new int[v2] {0};			//각 행에 들어갈 배열 할당
//
//		if (!arrA || !arrB || !arrC) {			//동적할당 검사
//			cout << "메모리가 할당되지 않았습니다.";
//			return 0;
//		}
//
//		cout << "행렬 A 입력" << endl;
//		for (int i = 0; i < h1; i++) {			//2차원 배열의 행만큼 반복
//			for (int j = 0; j < v1; j++) {			//2차원 배열의 열만큼 반복
//				cout << i + 1 << " 행 " << j + 1 << " 열 원소 입력 : ";
//				cin >> *(*(arrA + i) + j);			//i행 j열에 원소값 입력
//			}
//		}
//		cout << "행렬 B 입력" << endl;
//		for (int i = 0; i < h2; i++) {			//2차원 배열의 행만큼 반복
//			for (int j = 0; j < v2; j++) {			//2차원 배열의 열만큼 반복
//				cout << i + 1 << " 행 " << j + 1 << " 열 원소 입력 : ";
//				cin >> *(*(arrB + i) + j);			//i행 j열에 원소값 입력
//			}
//		}
//
//		//행렬의 덧셈
//		for (int i = 0; i < h2; i++) {
//			for (int j = 0; j < v2; j++) {
//				arrC[i][j] = arrA[i][j] + arrB[i][j];			//행렬의 덧셈
//			}
//		}
//		cout << endl << " 행렬 덧셈 결과" << endl;
//		for (int i = 0; i < h2; i++) {
//			for (int j = 0; j < v2; j++) {
//				cout << " " << *(*(arrC + i) + j);			//i행 j열의 원소값 출력
//			}
//			cout << endl;
//		}
//
//		//행렬의 뺄셈
//		for (int i = 0; i < h2; i++) {
//			for (int j = 0; j < v2; j++) {
//				arrC[i][j] = arrA[i][j] - arrB[i][j];			//행렬의 뺄셈
//			}
//		}
//		cout << endl << " 행렬 뺄셈 결과" << endl;
//		for (int i = 0; i < h2; i++) {
//			for (int j = 0; j < v2; j++) {
//				cout << " " << *(*(arrC + i) + j);			//i행 j열의 원소값 출력
//			}
//			cout << endl;
//		}
//		cout << endl;
//
//		//동적할당했던 메모리 변환
//		for (int i = 0; i < h1; i++) {			//동적할당 메모리 반환
//			delete[] arrA[i];			//힙영역의 2차원 배열에서 각 행의 시작주소를 반환
//			arrA[i] = nullptr;		//각 행의 시작주소를 가진 2차원 배열의 값을 null로 변경
//		}
//		delete[] arrA;			//힙영역 2차원 배열 반환
//		arrA = nullptr;			//스택영역에서 힙영역의 2차원 배열의 주소를 가졌던 arr의 값을 null로 변경
//
//		for (int i = 0; i < h2; i++) {			//동적할당 메모리 반환
//			delete[] arrB[i];			//힙영역의 2차원 배열에서 각 행의 시작주소를 반환
//			arrB[i] = nullptr;		//각 행의 시작주소를 가진 2차원 배열의 값을 null로 변경
//		}
//		delete[] arrB;			//힙영역 2차원 배열 반환
//		arrB = nullptr;			//스택영역에서 힙영역의 2차원 배열의 주소를 가졌던 arr의 값을 null로 변경
//
//		for (int i = 0; i < h2; i++) {			//동적할당 메모리 반환
//			delete[] arrC[i];			//힙영역의 2차원 배열에서 각 행의 시작주소를 반환
//			arrC[i] = nullptr;		//각 행의 시작주소를 가진 2차원 배열의 값을 null로 변경
//		}
//		delete[] arrC;			//힙영역 2차원 배열 반환
//		arrC = nullptr;			//스택영역에서 힙영역의 2차원 배열의 주소를 가졌던 arr의 값을 null로 변경
//	}
//}


//6번
//int main() {
//	int v1 = 0, h1 = 0, v2 = 0, h2 = 0;
//	while (true) {
//		//행렬 A와 B의 크기 입력받기
//		cout << "행렬의 곱셈 연산" << endl;
//		cout << "행렬 A의 크기 입력 : ";
//		cin >> h1 >> v1;
//		cout << "행렬 B의 크기 입력 : ";
//		cin >> h2 >> v2;
//		if (h1 <= 0 || v1 <= 0 || h2 <= 0 || v2 <= 0) {			//행렬의 행과 열의 값으로 0 이하가 입력되면 프로그램 종료
//			cout << "종료";
//			return 0;
//		}
//		if (h1 != v2) {			//두 행렬의 열의 크기 또는 행의 크기가 다를 경우 프로그램 종료
//			cout << "행렬의 곱셈을 할 수 없습니다." << endl << "종료";
//			return 0;
//		}
//
//		//2차원 배열 동적할당 하기
//		int** arrA = new int*[h1] {0};			//배열을 저장할 행 할당
//		int** arrB = new int*[h2] {0};			//배열을 저장할 행 할당
//		int** arrC = new int*[h2] {0};			//배열을 저장할 행 할당
//		for (int i = 0; i < h1; i++)			
//			arrA[i] = new int[v1] {0};			//각 행에 들어갈 배열 할당
//		for (int i = 0; i < h2; i++)			
//			arrB[i] = new int[v2] {0};			//각 행에 들어갈 배열 할당
//		for (int i = 0; i < h2; i++)				
//			arrC[i] = new int[v2] {0};			//각 행에 들어갈 배열 할당
//
//		if (!arrA || !arrB || !arrC) {			//동적할당 검사
//			cout << "메모리가 할당되지 않았습니다.";
//			return 0;
//		}
//
//		//행렬의 원소값 입력
//		cout << "행렬 A 입력" << endl;
//		for (int i = 0; i < h1; i++) {			//2차원 배열의 행만큼 반복
//			for (int j = 0; j < v1; j++) {			//2차원 배열의 열만큼 반복
//				cout << i + 1 << " 행 " << j + 1 << " 열 원소 입력 : ";
//				cin >> *(*(arrA + i) + j);			//i행 j열에 원소값 입력
//			}
//		}
//		cout << "행렬 B 입력" << endl;
//		for (int i = 0; i < h2; i++) {			//2차원 배열의 행만큼 반복
//			for (int j = 0; j < v2; j++) {			//2차원 배열의 열만큼 반복
//				cout << i + 1 << " 행 " << j + 1 << " 열 원소 입력 : ";
//				cin >> *(*(arrB + i) + j);			//i행 j열에 원소값 입력
//			}
//		}
//
//		//행렬의 곱셈 연산
//		for (int i = 0; i < h1; i++) {
//			for (int j = 0; j < v2; j++) {
//				for (int k = 0; k < h2; k++) {
//					*(*(arrC + i) + j) += *(*(arrA + i) + k) * *(*(arrB + k) + j);
//				}
//			}
//		}
//
//		//행렬 출력
//		cout << " 행렬 곱셈 결과" << endl;
//		for (int i = 0; i < h1; i++) {
//			for (int j = 0; j < v2; j++) {
//				cout << " " << *(*(arrC + i) + j);			//arrC배열의 원소값 출력
//			}
//			cout << endl;
//		}
//
//		//메모리 반환
//		for (int i = 0; i < h1; i++) {			//동적할당 메모리 반환
//			delete[] arrA[i];			//힙영역의 2차원 배열에서 각 행의 시작주소를 반환
//			arrA[i] = nullptr;		//각 행의 시작주소를 가진 2차원 배열의 값을 null로 변경
//		}
//		delete[] arrA;			//힙영역 2차원 배열 반환
//		arrA = nullptr;			//스택영역에서 힙영역의 2차원 배열의 주소를 가졌던 arr의 값을 null로 변경
//
//		for (int i = 0; i < h2; i++) {			//동적할당 메모리 반환
//			delete[] arrB[i];			//힙영역의 2차원 배열에서 각 행의 시작주소를 반환
//			arrB[i] = nullptr;		//각 행의 시작주소를 가진 2차원 배열의 값을 null로 변경
//		}
//		delete[] arrB;			//힙영역 2차원 배열 반환
//		arrB = nullptr;			//스택영역에서 힙영역의 2차원 배열의 주소를 가졌던 arr의 값을 null로 변경
//
//		for (int i = 0; i < h2; i++) {			//동적할당 메모리 반환
//			delete[] arrC[i];			//힙영역의 2차원 배열에서 각 행의 시작주소를 반환
//			arrC[i] = nullptr;		//각 행의 시작주소를 가진 2차원 배열의 값을 null로 변경
//		}
//		delete[] arrC;			//힙영역 2차원 배열 반환
//		arrC = nullptr;			//스택영역에서 힙영역의 2차원 배열의 주소를 가졌던 arr의 값을 null로 변경
//	}
//}