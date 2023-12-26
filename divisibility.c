#include<stdio.h>
void main(){
    int n,ch;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the divisibilty to be checked:");
    scanf("%d",&ch);
    switch(ch)
    { case 3:
    
        
        {
            if(n%3==0)
            {
                printf("%d is divisible by 3.",n);
            }
            else
            {
                printf("%d is not divisible by 3.",n);
            }
            break;
        }
        case 5:
        {
            if(n%5==0)
            {
                printf("%d is divisible by 5.",n);
            }
            else
            {
                printf("%d is not divisible by 5.",n);
            }
            break;
        }
        case 6:
        {
            if(n%6==0)
            {
                printf("%d is divisible by 6.",n);
            }
            else
            {
                printf("%d is not divisible by 6.",n);
            }
            break;
        }
        case 7:
        {
            if(n%7==0)
            {
                printf("%d is divisible by 7.",n);
            }
            else
            {
                printf("%d is not divisible by 7.",n);
            }
            break;
        }
        
        case 8:
        {
            if(n%8==0)
            {
                printf("%d is divisible by 8.",n);
            }
            else
            {
                printf("%d is not divisible by 8.",n);
            }
        }
        break;
        
        }
    }
