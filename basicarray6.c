#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("\nEnter number:");
        scanf("%d",&arr[i]);}
      printf("\narray elements are:");
       for( int i=0;i<10;i++){
       printf("\n%d",arr[i]);
    }
    printf("\nArray of numbers at odd indexes");
    for(int i=0;i<10;i++){
      if(i%2==0){
        continue;
      }
      else{
        printf("\n%d",arr[i]);
      }
    }
              return 0;

    }
