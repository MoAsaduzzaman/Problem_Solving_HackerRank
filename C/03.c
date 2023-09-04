//Problem name: Sum and Difference of Two Numbers
//https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true

#include<stdio.h>
int main(){
    int a,b,sum1,dif1;
    float x,y,sum2,dif2;

    scanf("%d %d\n",&a,&b);
    scanf("%f %f",&x,&y);

    sum1=a+b;
    dif1=a-b;
 
    sum2=x+y;
    dif2=x-y;
   
    printf("%d %d\n",sum1,dif1);
    printf("%.1f %.1f\n",sum2,dif2);

    return 0;
}