#include <iostream>
using namespace std;

// 합계를 계산하는 함수
int calculateSum(int Num[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += Num[i];
    }
    return sum;
}

// 평균을 계산하는 함수
double calculateAverage(int Num[], int size){
    int sum = calculateSum(Num, size); // 합계 함수 재사용
    return static_cast<double>(sum) / size;
}



// 메인 함수
int main()
{
    const int size = 5; // 배열 크기 정의
    int Num[size]; // 숫자를 저장할 배열

    // 숫자 입력 받기
    cout << "숫자를 입력하세요:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "숫자 " << i + 1 << ": ";
        cin >> Num[i];
    }

    // 결과 출력
    cout << "입력받은 숫자: ";
    for (int i = 0; i < size; i++) {
        cout << Num[i] << " ";
    }
    cout << endl;
    cout << "총합: " << calculateSum(Num, size) << endl;
    cout << "평균: " << calculateAverage(Num, size) << endl;
    return 0;
}
