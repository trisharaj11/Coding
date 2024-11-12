#include <stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }return fact;
}
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int fact=factorial(a);
    printf("The factorial of %d is: %d ",a,fact);
}