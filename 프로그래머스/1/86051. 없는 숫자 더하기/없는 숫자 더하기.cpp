#include <string>
#include <vector>

using namespace std;

// numbers: 0부터 9까지의 숫자 중 일부가 들어 있는 벡터
int solution(vector<int> numbers) {
    int answer = -1; // 결과를 저장할 변수 (0을 포함해야 하므로 초기값을 -1로 설정)
    
    int number[10] = { 0 }; // 0부터 9까지의 숫자 카운트를 저장할 배열
    
    // numbers에 포함된 숫자를 카운트
    for(int i = 0; i < numbers.size(); i++) {
        number[numbers[i]]++; // 해당 숫자의 인덱스 증가
    }
    
    // 0부터 9까지 숫자 중에서 numbers에 없는 숫자를 찾아 더하기
    for(int i = 0; i < 10; i++) {
        if (number[i] == 0) { // numbers에 없는 숫자인 경우
            answer += i;      // 해당 숫자를 결과에 더함
        }
    }
    
    return answer + 1; // 초기값 -1을 보정하여 최종 결과 반환
}