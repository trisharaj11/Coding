#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,1,1,1}};
    int maxcount = INT_MIN;
    int maxidx = -1;
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==1) count++;
        }
        if(maxcount<count){
        maxcount = count;
        maxidx = i;
    }printf("\n");
}printf("the idx is:%d ",maxidx);
}