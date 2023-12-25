#include<stdio.h>
int main(){
    int x,y,*a,*b,temp;
    printf("\nEnter value of x and y\n");
    scanf("%d %d",&x,&y);
    printf("before swapping \n x=%d\ny=%d\n",x,y);
    a=&x;
    b=&y;
    temp = *b;
    *b = *a;
    *a = temp;
    printf("After swapping \nx=%d\ny=%d\n",x,y);
    return 0;
}