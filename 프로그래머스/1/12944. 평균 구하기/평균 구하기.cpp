#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double sum = 0; // 합계를 저장할 변수
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i]; // 배열의 각 요소를 더하기
    }
    double answer = sum / arr.size(); // 합계를 배열 길이로 나누어 평균 계산
    return answer; // 결과 반환
}
