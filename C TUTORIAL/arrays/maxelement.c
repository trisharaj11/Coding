// #include <stdio.h>
// int main()
// {
//     int arr[6]={-2,-4,5,-5,90,56};
//     int max=arr[0];
//     for(int i=0;i<=5;i++){
//     if(max<arr[i]);
//     max=arr[i];
//     }printf("%d ",max);
// }

#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[6]={90,34,56,78,12,79};
    int max=INT_MIN;
    for(int i=0;i<=5;i++){
    if(max<arr[i]);
    max=arr[i];
    }printf("%d ",max);
}