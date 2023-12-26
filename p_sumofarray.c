#include<stdio.h>
void main(){
    int len , sum=0;
    printf("\nEnter an number:");
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++)
    {
        printf("Enter an array elements:arr[%d]\n",i);
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:\n");
    for(int i=0;i<len;i++){
        printf("\n %d",arr[i]);
    }
    printf("\n ARRAY\n");
    for(int i=0;i<len;i++){
        sum=sum+arr[i];
    }
    printf("\nthe sum of array id %d",sum);
    }


