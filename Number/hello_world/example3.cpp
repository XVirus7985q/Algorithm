#include <iostream>

using namespace std;

int main() {
    int Num;
    cin >> Num;

    // 입력값 검증
    while (Num > 2 && Num <= 10) { //종료 조건: 입력값이 2보다 크거나 10이하일 때 반복
        if (Num < 2 && Num > 10) { //입력값이 2보다 작거나 10초과일 때 실행			
        }
    int cnt = 1;

   

    for (int i = 0; i < Num; i++) {
        // 1
        cout << "*";

        // 2
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        // 3
        cout << "*";

        // 4
        for (int j = i; j < Num * 2 - 1 - cnt; j++) {
            cout << " ";
        }

        // 5
        cout << "*";

        // 6
        for (int j = 0; j < i - 1 + cnt; j++) {
            cout << "*";
        }

        // 7
        cout << "*";

        // 8
        for (int j = i; j < Num * 2 - 1 - cnt; j++) {
            cout << " ";
        }

        // 9
        cout << "*";

        // 10
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        // 11
        cout << "*";

        cnt++;
        cout << "\n";
    }

    // 왕관 밑에 있는 사각형 만들기
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < Num * 4 + 2; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    // 사용자로부터 입력 받기
    cout << "숫자를 입력하세요. ";
    cin >> Num;
    }
    cout << "3~10 중에서 입력해주세요!" << endl;
    return 0;
}
