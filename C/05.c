//Problem name: Pointers in C
//https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true

#include <stdio.h>

void update(int a,int b) {
    int sum1= a+b;
    int sum2= a-b;

    if(sum2<0){
        sum2=sum2*(-1);
    }
    printf("%d\n%d\n",sum1,sum2);
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    update(a,b);

    return 0;
}