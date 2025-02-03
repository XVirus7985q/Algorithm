#include <string>
#include <vector>

using namespace std;

// left부터 right까지의 숫자를 순회하면서 약수의 개수를 확인하고,
// 약수의 개수가 홀수이면 뺄셈, 짝수이면 덧셈하여 최종 값을 반환하는 함수
int solution(int left, int right) {
    int answer = 0; // 최종 결과를 저장할 변수

    // left부터 right까지 순회
    for(int i = left; i <= right; ++i) {
        int count = 0; // 약수의 개수를 저장할 변수
        
        // 1부터 i까지 나누어 떨어지는 개수를 확인하여 약수 개수 계산
        for(int j = 1; j <= i; ++j)
            if (i % j == 0) // i가 j로 나누어 떨어지면 약수
                ++count;

        // 약수의 개수가 홀수이면 해당 숫자를 빼고, 짝수이면 더함
        if (count % 2 == 1)
            answer -= i;
        else 
            answer += i;
    }

    return answer; // 최종 계산된 값 반환
}
