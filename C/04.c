//Problem name: Functions in C
//https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true

#include <stdio.h>
int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int answer= max(a, b, c, d);

    printf("%d",answer);

    return 0;
}

int max(int a,int b,int c,int d){
    int max = 0;
    
    if(max <= a) max = a;
    if(max <= b) max = b;
    if(max <= c) max = c;
    if(max <= d) max = d;

 return max;
}
