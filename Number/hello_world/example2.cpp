#include <iostream>
using namespace std;

int main()
{
    int Num;

    // 사용자로부터 입력 받기
    cout << "1~10 사이의 숫자를 입력하세요 (종료: 다른 값 입력): ";
    cin >> Num;

    // 입력값 검증
    while (Num > 0 && Num <= 10) {
        // 다이아몬드 상단 출력
        for (int i = 1; i <= Num; i++) {
            // 공백 출력
            for (int j = 1; j <= Num - i; j++) {
                cout << " ";
            }
            // 별과 공백 출력 (테두리만 출력)
            for (int k = 1; k <= 2 * i - 1; k++) {
                if (k == 1 || k == 2 * i - 1)
                    cout << "*"; // 테두리 별
                else
                    cout << " "; // 내부 공백
            }
            cout << endl;
        }

        // 다이아몬드 하단 출력
        for (int i = Num - 1; i >= 1; i--) {
            // 공백 출력
            for (int j = 1; j <= Num - i; j++) {
                cout << " ";
            }
            // 별과 공백 출력 (테두리만 출력)
            for (int k = 1; k <= 2 * i - 1; k++) {
                if (k == 1 || k == 2 * i - 1)
                    cout << "*"; // 테두리 별
                else
                    cout << " "; // 내부 공백
            }
            cout << endl;
        }

        // 사용자로부터 다시 입력 받기
        cout << "1~10 사이의 숫자를 입력하세요. : ";
        cin >> Num;
    }

    cout << "프로그램을 종료합니다." << endl;
    return 0;
}
