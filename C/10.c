//Problem name: Array Reversal
//https://www.hackerrank.com/challenges/reverse-array-c/problem?isFullScreen=true

#include<stdio.h>
int main(){
    int a[1000],n,i,j,sum=0;
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&a[i]);   
    }
    for(j=n-1; j>=0; j--){
        printf("%d ",a[j]);
    }

    return 0;
}
