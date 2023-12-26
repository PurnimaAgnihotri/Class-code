#include<stdio.h>
int factorial(int);
int main(){
    int n,answer;
    printf("\n Enter number:");
    scanf(" %d",&n);
   answer = factorial(n);
   printf("Factorial=%d",answer);
      return 0;
}
int factorial(int n){
     int f;
    if(n==0)
      return 1;
      else 
      f=n*factorial(n-1);
      return f;
    }
