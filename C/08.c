//Problem name: Sum of Digits of a Five Number
//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true

#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int sum = 0;
   
    while(num != 0){
        sum += num % 10;
        num = num/10;
    }
    printf("%d",sum);
}
