#include <stdio.h>
void reverse(int a[]){
    int i=0;
    int j=4;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;

    }
    return;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    reverse(arr);
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }
}