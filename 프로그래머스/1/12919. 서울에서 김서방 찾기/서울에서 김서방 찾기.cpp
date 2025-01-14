#include <string>
#include <vector>

using namespace std;

// 함수 solution: 서울에서 "Kim"이라는 이름을 가진 사람의 위치를 찾아 
// "김서방은 x에 있다"라는 문자열을 반환하는 함수
string solution(vector<string> seoul) {
    string answer = ""; // 결과 문자열을 저장할 변수
    for (int i = 0; i < seoul.size(); i++) { // 서울 배열의 크기만큼 반복
        if (seoul[i] == "Kim") // 현재 배열 요소가 "Kim"인지 확인
            answer = "김서방은 " + to_string(i) + "에 있다"; // 위치를 포함한 문자열 생성
    }
    return answer; // 결과 문자열 반환
}
