#include <string>
#include <vector>

using namespace std;

// 두 개의 2차원 벡터(행렬)를 더하는 함수
vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer; // 결과를 저장할 2차원 벡터

    // arr1의 행 개수만큼 반복
    for(int i = 0; i < arr1.size(); ++i)
    {
        vector<int> temp; // 한 행씩 더한 결과를 저장할 임시 벡터

        // 각 행의 열 개수만큼 반복
        for(int j = 0; j < arr1[i].size(); ++j)
        {
            // 같은 위치의 값을 더해서 temp에 추가
            temp.push_back(arr1[i][j] + arr2[i][j]);
        }

        // 한 행의 덧셈이 끝나면 answer에 추가
        answer.push_back(temp);
    }

    // 최종 결과 반환
    return answer;
}