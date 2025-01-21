#include <string>
#include <vector>

using namespace std;

// phone_number: 사용자의 전화번호를 나타내는 문자열
string solution(string phone_number) {
    
    // 전화번호의 뒷 4자리를 제외한 나머지 자리를 '*'로 대체
    for(int i = 0; i < phone_number.size() - 4; i++) {
        phone_number[i] = '*'; // 현재 위치의 문자를 '*'로 변경
    }
    
    // 변환된 전화번호 문자열 반환
    return phone_number;
}