#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
     return (num1* 1000) / num2;
}
int main(){
    printf("%d\n", solution(3, 2));    // 출력: 1500
    printf("%d\n", solution(7, 3)); // 출력: 2333
    printf("%d\n", solution(1, 16)); // 출력: 62
    return 0;
}