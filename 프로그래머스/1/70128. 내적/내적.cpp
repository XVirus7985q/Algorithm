#include <string>
#include <vector>

using namespace std;

// a: 첫 번째 정수 배열
// b: 두 번째 정수 배열
// 두 배열의 같은 인덱스 요소끼리 곱한 값의 합을 반환
int solution(vector<int> a, vector<int> b) {
    int answer = 0; // 결과값을 저장할 변수
    
    // 두 배열의 각 요소를 곱한 값을 누적 합산
    for(int i = 0; i < a.size(); i++)
        answer += a[i] * b[i];
    
    return answer; // 최종 결과 반환
}