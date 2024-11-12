#include <stdio.h>
int check(int x){
    int sum=0;
    int a=0;
    while(x!=0){
        a=x%10;
        if(x%2==0) sum=sum+a;
    }x=x/10;
    return sum;
}
int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int a=check(n);
    printf("The sum of even digits of %d is : %d",n,a);
}