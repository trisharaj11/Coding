//for sinlge and double step
// #include <stdio.h>
// int stair(int x){
//     if(x==1 || x==2) return x;
//     return stair(x-1)+stair(x-2);
// }
// int main()
// {
//     int n;
//     printf("Enter no of stairs: ");
//     scanf("%d",&n);
//     int ways=stair(n);
//     printf("The no of ways for %d stairs is: %d",n,ways);
// }

//for single double triple step
#include <stdio.h>
int stair(int x){
    if(x==1 || x==2 || x==3) return x;
    return stair(x-1)+stair(x-2)+stair(x-3);
}
int main()
{
    int n;
    printf("Enter no of stairs: ");
    scanf("%d",&n);
    int ways=stair(n);
    printf("The no of ways for %d stairs is: %d",n,ways);
}