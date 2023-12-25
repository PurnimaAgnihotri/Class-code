#include <stdio.h>
void average(int n,int arr[])
{
    int sum=0;
    float avg=1;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("\nsum=%d",sum);
    float size;
    avg*=sum/(float)n;
    printf("\nThe average of array is = %f",avg);
}
void min(int n,int arr[])
{
    int c;
    c=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<c)
        {
            c=arr[i];
        }
 
    }
    printf("\nMinimum number in the array is = %d\n",c);
    
}
void max(int n,int arr[])
{
    int c;
    c=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>c)
        {
            c=arr[i];
        }
 
    }
    printf("\nMaximum number in the array is = %d",c);
    
}
void main()
{
    int n;
    
    printf("Enter the length of a array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array: \n");
    for(int i=0;i<n;i++)
    {
        printf("enter the element a[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nARRAY\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    average(n,arr);
    max(n,arr);
    min(n,arr);
}




