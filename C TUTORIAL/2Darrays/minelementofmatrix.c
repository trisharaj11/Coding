#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][3]={{0,4,8},{6,7,9},{2,1,11}};
    int min=INT_MAX;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(min>arr[i][j]){
                min=arr[i][j];
                
            }
        }
    }printf("%d ",min);
}

