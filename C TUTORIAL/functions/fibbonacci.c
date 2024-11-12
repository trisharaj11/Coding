#include <stdio.h>
int series(int n){
    int a=1;
    int b=1;
    int sum=1;
  for(int i=1;i<=n-2;i++){
    sum=a+b;
    a=b;
    b=sum;
    
  }return sum;

}
int main()
{
  int n;
  printf("ENTER THE NUMBER: ");
  scanf("%d",&n);
  int fibbo=series(n);
  printf("the fibbonacci series of %dth term is : %d ",n,fibbo);

}