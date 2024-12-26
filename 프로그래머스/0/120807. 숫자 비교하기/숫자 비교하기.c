#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
     if (num1 == num2) {
        return 1; // 두 수가 같으면 1 반환
    } else {
        return -1; // 두 수가 다르면 -1 반환
}
}
int main(){
    printf("테스트 1 결과: %d\n", solution(2, 3));
    printf("테스트 1 결과: %d\n", solution(11, 11));
    printf("테스트 1 결과: %d\n", solution(7, 99));
    
    return 0;
}