#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    return num1 + num2;
}
int main(){
    printf("%d\n", solution(2, 3));    // 출력: 5
    printf("%d\n", solution(100, 2)); // 출력: 102
    return 0;
}