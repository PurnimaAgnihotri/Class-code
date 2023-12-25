#include<stdio.h>
void swap1(int,int);
void swap2(int,int);
int main(){
    int a,b;
    printf("\nEnter first no.:");
    scanf("%d",&a);
    printf("\nEnter second no.:");
    scanf("%d",&b);
    swap1(a,b);
    swap2(a,b); return 0;
}
void swap1(int x, int y){
    int c;
    c=x;
    x=y;
    y=c;
    printf("\nFirst number a is %d",x);
    printf("\n second number b is %d",y);
}
void swap2(int a, int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nEnter first no.a is %d",a);
     printf("\nEnter second no.b is %d",b);
}