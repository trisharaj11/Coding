#include <stdio.h>
int main()
{
    int arr[5]={2,3,4,1,6};
    int prod=1;
    for(int i=0;i<=4;i++){
        prod=prod*arr[i];
    }printf("%d",prod);
}