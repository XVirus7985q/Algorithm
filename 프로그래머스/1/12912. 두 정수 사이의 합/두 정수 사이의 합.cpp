#include <string>
#include <vector>

using namespace std;

// 두 정수 a와 b 사이에 포함된 모든 정수의 합을 계산하는 함수
long long solution(int a, int b) 
{
    long long answer = 0; // 결과를 저장할 변수
    
    // a와 b가 같을 경우, 하나의 값만 반환
    if (a == b) 
    {
        return a;
    } 
    // a가 b보다 작은 경우, a부터 b까지의 합을 계산
    else if (a < b) 
    {
        for (int i = a; i <= b; i++) 
        {
            answer += i; // 현재 값을 answer에 더함
        }
    } 
    // b가 a보다 작은 경우, b부터 a까지의 합을 계산
    else 
    {
        for (int i = b; i <= a; i++) 
        {
            answer += i; // 현재 값을 answer에 더함
        }
    }
    
    return answer; // 계산된 합을 반환
}