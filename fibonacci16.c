#include<stdio.h>
void fibonacci(int);
int main(){
    int n;
    printf("\n Enter number of terms:");
    scanf(" %d",&n);
    printf("\n 0\n 1");
    fibonacci(n-2);
    return 0;
}
void fibonacci(int n){
    static int n1=0,n2=1,n3;
    if(n>0){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("\n%d",n3);
        fibonacci(n-1);
    }}
