#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int age) {
     return 2022-(age-1);
}
int main(){
     printf("테스트 1 결과: %d\n", solution(40));    // 출력: 1983
    printf("테스트 2 결과: %d\n", solution(23)); // 출력: 2000

    return 0;
}