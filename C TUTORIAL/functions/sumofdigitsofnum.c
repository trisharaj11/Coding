#include <stdio.h>
int sum(int x){
    int sum=0;
    int a=0;
    while(x!=0){
        a=x%10;
        sum=sum+a;
        x=x/10;
}return sum;
}
int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int a=sum(n);
    printf("The sum of the digits of the %d is : %d",n,a);
}