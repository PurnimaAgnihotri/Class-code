#include<stdio.h>
void simpleinterest(int, int , int);
 int main(){
    int p,r,t;
  printf("enter principal:");
  scanf("%d",&p);
  printf("enter rate:");
  scanf("%d",&r);
  printf("enter time:");
  scanf("%d",&t);
  simpleinterest(p,r,t);
  return 0;
}
void simpleinterest(int p, int r, int t)
{
    int si;
    si=(p*r*t)/100;
    printf("simple interest=%d",si);
}