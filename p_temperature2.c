#include<stdio.h>
void celtofeh(float);
void fehtocel(float);
int main(){
    float f,c;
    printf("Enter temperature in celsius:");
    scanf("%f",&c);
    celtofeh(c);
    printf("Enter the temperature in fahrenheit:");
    scanf("%f",&f);
    fehtocel(f);
    return 0;
}
void celtofeh(float c){
    float f;
    f=c*9/5+32;
    printf("temperature in fehrenheit=%f\n",f);
}
void fehtocel(float f){
    float c;
    c=(f-32)*5/9;
    printf("temperature in celsius=%f\n",c);
}
