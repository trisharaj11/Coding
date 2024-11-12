#include <stdio.h>
int fibo(int x){
    if(x==1 || x==2) return 1;
    return fibo(x-1)+fibo(x-2);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int a=fibo(n);
    printf("The fibbonacci series of %dth term is: %d ",n,a);
}