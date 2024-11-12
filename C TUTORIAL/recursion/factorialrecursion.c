#include <stdio.h>
int factorial(int x){
    if(x==1 || x==0) return 1;
    return x*factorial(x-1);//function calling itself
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("The Factorial of %d is : %d ",n,fact);
}