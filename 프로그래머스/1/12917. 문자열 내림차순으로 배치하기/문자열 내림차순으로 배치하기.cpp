#include <string>
#include <algorithm> // sort 함수 사용을 위해 포함

using namespace std;

// s: 입력 문자열 (영어 대소문자로 구성)
// 문자의 ASCII 값을 기준으로 내림차순 정렬하여 반환하는 함수
string solution(string s) {
    // 문자열을 내림차순 정렬
    sort(s.begin(), s.end(), greater<int>());
    
    return s; // 정렬된 문자열 반환
}