//Problem name: Playing With Characters
//https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true

#include<stdio.h>
#include<string.h>
int main(){
    char a;
    char string[100];
    char sentence[200];
    
    scanf("%c\n",&a);
    scanf("%s\n",&string);
    scanf("%[^\n]s",&sentence);
    
    printf("%c\n%s\n%s\n",a,string,sentence);

    return 0;
}