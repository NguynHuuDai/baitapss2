#include<stdio.h>
int main(){
    int num, sum;
    scanf("%d", &num);
    sum = num / 1000 + (num % 1000) / 100 + (num % 100) / 10 + num % 10;
    printf("%d\n", sum);
    return 0;
}

