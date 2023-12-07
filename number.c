#include<stdio.h>

int main(){
    int number;
    printf("enter number");
    scanf("%d",&number);
    if(number%3==0 && number%5==0 && number%6==0 && number%7==0 && number%8==0){
        printf("number is divisible by 3,5,6,7,8\n");
    }
    else{
        printf("number is not divisible \n");
    }
    return 0;
}