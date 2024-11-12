#include <stdio.h>
int power(int x,int y){
    int p=1;
    for(int i=1;i<=y;i++){
        p*=x;
    }return p;
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