#include <string>
#include <vector>
#include <algorithm> // min_element 함수를 사용하기 위해 포함

using namespace std;

// arr: 입력 배열로, 각 요소는 양의 정수
vector<int> solution(vector<int> arr) {
    vector<int> answer; // 결과를 저장할 벡터
    
    // 배열의 크기가 1인 경우 처리
    if(arr.size() == 1) {
        answer.push_back(-1); // 배열에 -1 추가
        return answer;        // 결과 반환
    }
    
    // 배열에서 가장 작은 요소를 찾아 제거
    arr.erase(min_element(arr.begin(), arr.end())); 
    // min_element: arr.begin()부터 arr.end() 사이에서 가장 작은 값을 가진 요소의 반복자를 반환
    answer = arr; // 나머지 요소를 결과 벡터에 복사
    
    return answer; // 결과 반환
}
