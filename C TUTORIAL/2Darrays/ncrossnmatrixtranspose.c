#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n][n];
    //input
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //transpose using swapping
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //output after transpose
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}