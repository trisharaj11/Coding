#include <stdio.h>
void reverse(int a[],int x,int y)
{
  for(int i=x,j=y;i<j;i++,j--) 
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }return;
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("Enter the elements of array: ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
        printf("%d ",arr[i]);
    }

    int k;
    printf("\nEnter k: ");
    scanf("%d",&k);
    //steps to rotate-->
    k=k%n;//if k is greater than n
    reverse(arr,0,n-1);//for reversing whole array
    reverse(arr,0,k-1);//for reversing first k-1 parts
    reverse(arr,k,n-1);//for reversing remaining parts
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
}
}
