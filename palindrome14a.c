#include<stdio.h>
#include<string.h>
int main(){
    char a[50], b[50];
    int cmp;
    printf("\nEnter String\n");
    gets(a);
    strcpy(b,a);
    strrev(a);
    cmp=strcmp(a,b);
    if(cmp==0){
        printf("Enter string is a palindrome");
    }
    else{
        printf("Enter string is not a palindrome");
    }
    return 0;


}