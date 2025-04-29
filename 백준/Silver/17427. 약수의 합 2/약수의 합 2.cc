#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> f(N + 1, 0); // f(y)를 저장할 배열, y는 1~N (0은 무시)

    for (int i = 1; i <= N; ++i) {
        for (int j = i; j <= N; j += i) {
            f[j] += i; // i는 j의 약수이므로 더해줌
        }
    }

    long long result = 0;
    for (int i = 1; i <= N; ++i) {
        result += f[i]; // g(N) 계산
    }

    cout << result << endl;
    return 0;
}
