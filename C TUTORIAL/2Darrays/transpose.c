#include <stdio.h>
int main()
{
    int r;
    printf("Enter row: ");
    scanf("%d",&r);
    int c;
    printf("Enter columns: ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }printf("\n");
    printf("The matrix is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }printf("The transpose is: \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }printf("\n");
    }
}