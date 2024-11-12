#include <stdio.h>
int main()
{
    int r,c,arr[10][10],brr[10][10],sum[10][10];;
    printf("Enter no of rows: ");
    scanf("%d",&r);
    printf("Enter no of columns: ");
    scanf("%d",&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }printf("\n");
   
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        sum[i][j]=arr[i][j]+brr[i][j];
    }
   } 
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");
   } 
}

// #include <stdio.h>
// int main()
// {
//     int a[2][2]={1,2,3,4};
//     int b[2][2]={5,6,7,8};
//     int sum[2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//         sum[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//         printf("%d ",sum[i][j]);
//         }printf("\n");
//     }
// }

//withutextramatrix