#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int sum = 0; 
    for (int i = 2; i <= n; i += 2) { 
        sum += i; 
    }
    return sum; 
}

int main() {
   
    int n1 = 10;
    cout << "n = " << n1 << ", result = " << solution(n1) << endl;

    
    int n2 = 4;
    cout << "n = " << n2 << ", result = " << solution(n2) << endl;

    return 0;
}
