#include <string>
#include <vector>

using namespace std;

// 문자열이 숫자로만 이루어져 있고, 길이가 4 또는 6인지 확인하는 함수
bool solution(string s) {
    // 1. 문자열의 길이를 가져온다.
    const size_t length = s.length();

    // 길이가 4 또는 6이 아니라면 false 반환
    if (length != 4 && length != 6) {
        return false;
    }

    // 2. 문자열의 각 문자가 숫자인지 확인
    for (size_t i = 0; i < length; ++i) {
        // 문자가 숫자가 아니라면 false 반환
        if (!(s[i] >= '0' && s[i] <= '9')) {
            return false;
        }
    }

    // 모든 조건을 통과하면 true 반환
    return true;
}