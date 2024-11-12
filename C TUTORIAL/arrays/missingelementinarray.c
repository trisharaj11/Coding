#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,8,9,10};
    int sum=0;
    for(int i=0;i<=9;i++){
        sum=sum+arr[i];
    }
    int sum2=10*(10+1)/2;
    int ans=sum2-sum;
    printf("%d",ans); 
}