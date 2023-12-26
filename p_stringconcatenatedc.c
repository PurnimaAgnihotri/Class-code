#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[50];
    printf("\nEnter first string:");
    gets(s1);
     printf("\nEnter second string:");
    gets(s2);
    strcat(s1,s2);
    printf("Output string after concatenation: %s",s1);
    return 0;
}
