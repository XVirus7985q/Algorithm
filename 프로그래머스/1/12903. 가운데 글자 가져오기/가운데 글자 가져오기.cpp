#include <string>
#include <vector>

using namespace std;


// s: 입력 문자열
string solution(string s) {
    string answer = ""; // 결과를 저장할 문자열
    
    // 문자열의 길이가 짝수인 경우
    if(s.length() % 2 == 0)
        answer += s[(s.length() / 2) - 1]; // 가운데 두 문자 중 앞의 문자 추가
    
    // 문자열의 길이가 홀수이든 짝수이든 공통으로 가운데 문자 추가
    answer += s[s.length() / 2]; 
    
    return answer; // 결과 반환
}