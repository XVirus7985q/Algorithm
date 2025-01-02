#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;  // 변환된 결과를 저장할 변수
    int sign = 1;    // 부호를 저장할 변수 (기본값: 양수)

    size_t start = 0; // 숫자 계산을 시작할 위치
    // 첫 번째 문자가 부호인지 확인
    if (s[0] == '-') {
        sign = -1;  // 음수로 설정
        start = 1;  // 숫자는 두 번째 문자부터 처리
    } else if (s[0] == '+') {
        start = 1;  // "+"는 숫자가 두 번째 문자부터 시작
    }

    // 숫자 변환 로직
    for (size_t i = start; i < s.size(); ++i) {
        answer = answer * 10 + (s[i] - '0'); // 현재 자릿수 계산
    }

    return answer * sign; // 부호를 반영한 결과 반환
}
