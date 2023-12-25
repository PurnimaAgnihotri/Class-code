#include<stdio.h>
int main(){
    int a[10],i,largest;
    for(i=0;i<10;i++){
        printf("\n Enter Number:");
        scanf("%d",&a[i]);
         }
         largest=a[0];
     for(i=0;i<10;i++)
        if(a[i]>largest)
            largest=a[i];
            printf("\n largest number is %d", largest);
        return 0;
}