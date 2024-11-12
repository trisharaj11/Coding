#include <stdio.h>
int sum(int x){
    if(x==1 || x==0) return x;
    return x+sum(x-1);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int add=sum(n);
    printf("The sum is: %d",add);
}