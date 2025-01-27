#include <string>
#include <vector>

using namespace std;

// n: 출력 문자열의 길이를 결정하는 정수
string solution(int n) {
    string answer = ""; // 결과 문자열을 저장할 변수

    // n번 반복하며 "수"와 "박"을 번갈아 추가
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) // 인덱스가 짝수면 "수" 추가
            answer += "수";
        else           // 인덱스가 홀수면 "박" 추가
            answer += "박";
    }
    
    return answer; // 완성된 문자열 반환
}