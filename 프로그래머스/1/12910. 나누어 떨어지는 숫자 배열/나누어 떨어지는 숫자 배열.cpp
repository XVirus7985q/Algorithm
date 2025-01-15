#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 주어진 배열에서 divisor로 나누어 떨어지는 숫자를 오름차순으로 정렬하여 반환하는 함수
// 나누어 떨어지는 숫자가 없으면 -1을 반환
vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer; // 결과를 저장할 벡터
    
    // 배열을 순회하면서 divisor로 나누어 떨어지는 숫자를 찾음
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % divisor == 0) { // 나누어 떨어지는 경우
            answer.push_back(arr[i]); // 결과 벡터에 추가
        }
    }
    
    // 나누어 떨어지는 숫자가 없는 경우
    if(answer.size() == 0) {
        answer.push_back(-1); // 결과 벡터에 -1 추가
    } else {
        sort(answer.begin(), answer.end()); // 나누어 떨어지는 숫자를 오름차순으로 정렬
    }
    
    return answer; // 결과 반환
}