#include <stdio.h>
int power(int x,int y){
   if(y==0) return 1;
   return x*power(x,y-1);
}
int main()
{
    int a;
    printf("Enter base: ");
    scanf("%d",&a);
    int b;
    printf("Enter power: ");
    scanf("%d",&b);
    int sq=power(a,b);
    printf("%d raised to the power %d is: %d",a,b,sq);
}