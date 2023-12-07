#include<stdio.h>
int main(){
    int a=5,b=10;
    printf("\n value of a=%d and value of b=%d",a+b);
    printf("\n value of a =%d",a++);
    printf("\n value of a =%d",++a);
printf("\n value of b =%d",++b);
printf("\n value of b =%d",b++);
printf("\n last value  =%d",(a++)+(++b));

return 0;

}