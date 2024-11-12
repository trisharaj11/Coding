#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][3]={{2,4,8},{6,7,9},{2,1,11}};
    int max=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }printf("%d ",max);
}



