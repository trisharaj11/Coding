#include <stdio.h>
int powerlog(int x,int y){
    if(y==0) return 1; 
    if(y==1) return x;
    int a=powerlog(x,y/2);
    if(y%2==0)
    return a*a;
    else
    return a*a*x;
}

int main()
{
    int a;
    printf("Enter base: ");
    scanf("%d",&a);
    int b;
    printf("Enter power: ");
    scanf("%d",&b);
    int sq=powerlog(a,b);
    printf("%d raised to the power %d is: %d",a,b,sq);
}