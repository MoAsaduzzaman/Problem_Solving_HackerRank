//Problem name: 1D Arrays in C
//https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true

#include<stdio.h>
int main(){
    int a[1000],n,i,sum=0;
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    printf("%d\n",sum);
 
    return 0;
}
