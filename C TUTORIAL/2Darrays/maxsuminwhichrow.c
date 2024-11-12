#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][4]={{1,2,3,1},{0,5,0,2},{9,2,0,3}};
    int maxsum=INT_MIN;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum=sum+arr[i][j];
            maxsum=sum;
        }
        if(maxsum<sum){
            printf("the row number is %d ",sum);
        }
    }
}