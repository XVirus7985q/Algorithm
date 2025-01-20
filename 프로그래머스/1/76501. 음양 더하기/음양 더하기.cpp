#include <string>
#include <vector>

using namespace std;

// absolutes: 정수의 절댓값을 담은 벡터
// signs: absolutes에 해당하는 정수의 부호를 true(양수), false(음수)로 나타낸 벡터
int solution(vector<int> absolutes, vector<bool> signs) 
{
    int answer = 0; // 결과를 저장할 변수
    
    // absolutes 벡터의 크기만큼 반복
    for(int i = 0; i < absolutes.size(); i++)
    {
        // signs[i]가 true이면 양수로 더함
        if(signs[i] == true)
        {
            answer += absolutes[i];
        }
        // signs[i]가 false이면 음수로 더함
        else
        {
            answer -= absolutes[i];
        }
    }
    
    // 최종 결과 반환
    return answer;
}