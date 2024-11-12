// #include <stdio.h>
// void sum(int n,int x){
//     if(n==0){
//         printf("The sum is: %d",x);
//         return;
//     }
//     sum(n-1,x+n);
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     sum(n,0);
// }

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