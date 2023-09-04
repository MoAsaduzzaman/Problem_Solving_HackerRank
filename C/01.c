//Problem name: "Hello World! in C"
//https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true

#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%[^\n]s",&a);

    printf("Hello, World!\n"); 
    printf("%s\n",a);

    return 0;
}