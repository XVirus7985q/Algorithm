#include <iostream>
using namespace std;

// 합계를 계산하는 함수
int calculateSum(int Num[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += Num[i];
    }
    return sum;
}

// 평균을 계산하는 함수
double calculateAverage(int Num[], int size) {
    int sum = calculateSum(Num, size); // 합계 함수 재사용
    return static_cast<double>(sum) / size;
}

// 버블 정렬 함수
void BubbleSort(int Num[], int size, bool ascending) {
    int temp = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) 
        {
            // 정렬 기준: 오름차순(ascending=true) 또는 내림차순(ascending=false)
            if ((ascending && Num[j] > Num[j + 1]) || (!ascending && Num[j] < Num[j + 1])) 
            {
                temp = Num[j];
                Num[j] = Num[j + 1];
                Num[j + 1] = temp;
            }
        }
    }
}

// 메인 함수
int main() {
    const int size = 5; // 배열 크기 정의
    int Num[size];      // 숫자를 저장할 배열
    int sortChoice;     // 정렬 방식 선택 변수

    // 정렬 방식 선택
    cout << "정렬 방식을 선택하세요 (1: 오름차순, 2: 내림차순): ";
    cin >> sortChoice;
    
    // 숫자 입력 받기
    cout << "숫자를 입력하세요:" << endl;
    for (int i = 0; i < size; i++) 
    {
        cout << "숫자 " << i + 1 << ": ";
        cin >> Num[i];
    }

    // 정렬 수행
    if (sortChoice == 1) 
    {
        BubbleSort(Num, size, true); // 오름차순 정렬
    }
    else if (sortChoice == 2) 
    {
        BubbleSort(Num, size, false); // 내림차순 정렬
    }
    else 
    {
        cout << "잘못된 입력입니다. 프로그램을 종료합니다." << endl;
        return 1; // 비정상 종료
    }

    // 정렬된 결과 출력
    cout << "정렬된 숫자: ";
    for (int i = 0; i < size; i++) 
    {
        cout << Num[i] << " ";
    }
    cout << endl;

    // 총합과 평균 출력
    cout << "총합: " << calculateSum(Num, size) << endl;
    cout << "평균: " << calculateAverage(Num, size) << endl;

    return 0;
}
