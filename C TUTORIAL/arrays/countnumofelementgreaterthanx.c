#include <stdio.h>
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int x;
    printf("Enter x: ");
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<=7;i++){
        if(arr[i]>x) 
        count++;
    }
    printf("%d",count);
}