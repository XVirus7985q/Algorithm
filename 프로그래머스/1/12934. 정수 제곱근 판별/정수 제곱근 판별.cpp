#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    for (long long x = 1; x * x <= n; x++) { // x의 제곱이 n 이하일 때까지 반복
        if (n / x == x && n % x == 0) { // x가 n의 제곱근인지 확인
            return (x + 1) * (x + 1); // 다음 완전제곱수를 반환
        }
    }
    return -1; // 완전제곱수가 아니면 -1 반환
}
