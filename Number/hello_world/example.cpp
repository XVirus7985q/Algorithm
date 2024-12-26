#include <iostream>
using namespace std;

int main()
{
	int Num; 
	
	// 사용자로부터 입력 받기
	cout << "숫자를 입력하세요. ";
	cin >> Num; 

	// 입력값 검증
	while (Num> 0 && Num <= 10){ //종료 조건: 입력값이 0보다 크거나 10이하일 때 반복
		if (Num< 0 && Num > 10){ //입력값이 0보다 작거나 10초과일 때 실행			
		}

		// 다이아몬드 상단 출력
		for (int i = 1; i <= Num; i++) { // 초기화: i = 1
                                         // 종료 조건: i <= Num
                                         // 사후 조건: i++
			// 공백 출력
			for (int j = 1; j <= Num - i; j++) { // 초기화: j = 1
                                                 // 종료 조건: j <= Num - i
                                                 // 사후 동작: j++
				cout << " "; // 실제 동작: 공백 출력
			}
			// 별 출력
			for (int j = 1; j <= 2 * i - 1; j++) { // 초기화: k = 1
                                                   // 종료 조건: k <= 2 * i - 1
                                                   // 사후 조건: k++
				cout << "*"; // 실제 동작: 별 출력				
			}
			cout << endl; // 줄 바꿈
		}

		// 다이아몬드 하단 출력
		for (int i = Num - 1; i >= 1; i--) { // 초기화: i = Num - 1
                                             // 종료 조건: i >= 1
                                             // 사후 조건: i--
			// 공백 출력
			for (int j = 1; j <= Num - i; j++) { // 초기화: j = 1
                                                 // 종료 조건: j <= Num - i
                                                 // 사후 동작: j++
				cout << " "; // 실제 동작: 공백 출력
			}
			// 별 출력
			for (int j = 1; j <= 2 * i - 1;j++) { // 초기화: k = 1
                                                   // 종료 조건: k <= 2 * i - 1
                                                   // 사후 조건: k++
				cout << "*"; // 실제 동작: 별 출력				
			}
			cout << endl; // 줄 바꿈
		}
		// 사용자로부터 입력 받기
		cout << "숫자를 입력하세요. " ; 
		cin >> Num; 
	}
	cout << "1~10 중에서 입력해주세요!" << endl;
	return 0;
}


