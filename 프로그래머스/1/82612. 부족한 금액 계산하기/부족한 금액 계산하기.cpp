using namespace std;

// price: 놀이기구 이용 요금
// money: 현재 가진 돈
// count: 놀이기구를 이용할 횟수
// 이용 요금의 총합을 계산하고, 부족한 금액을 반환하는 함수
long long solution(int price, int money, int count)
{
    long long answer = 0; // 필요한 총 금액을 저장할 변수

    // 놀이기구를 count번 이용하면서 필요한 총 금액 계산
    for(int i = 1; i <= count; i++)
        answer += i * price; // (1회 이용 요금 * 1) + (2회 이용 요금 * 2) + ... + (count회 이용 요금 * count)

    // 현재 가진 돈(money)에서 총 비용(answer)을 뺀 결과가 음수면 부족한 금액 계산
    if(money - answer < 0) 
        answer -= money; // 부족한 금액을 계산 (answer = 총 비용 - 가진 돈)
    else 
        answer = 0; // 부족한 금액이 없으면 0 반환

    return answer; // 최종적으로 부족한 금액 반환
}