#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int idx=0;
    int x;
    printf("Enter x: ");
    scanf("%d",&x);
    bool flag=false;
    for(int i=0;i<=6;i++)
    {
        if(arr[i]==x)
        {
            flag = true;
            idx = i;
            break;
        }
    }
    if(flag==false)
    {
        printf("%d is not present in the array",x);
    }
    else
    {
        printf("%d is present in the array and its index is %d",x,idx);
    }
}