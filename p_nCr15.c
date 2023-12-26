#include <stdio.h>
void nCr(int *n,int *r){
  int i,j,k,ncr;
  //Calculate n!
  k=1;
  for (i=1;i<=*n;i++){
    k=k*i;
  }
  //calculate r!
  j=1;
  for (i=1;i<=*r;i++)
    j=j*i;
    //calculate (n-r)!
    i=*n-*r;
    ncr=1;
    while(i>0){
      ncr*=i;
      i--;
    }
    //calculate nCr
  ncr=k/(j*ncr);
  printf("%dC%d=%d\n",*n,*r,ncr);
}
int main() {
    int n, r;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

   
    nCr(&n, &r);

    return 0;
}

