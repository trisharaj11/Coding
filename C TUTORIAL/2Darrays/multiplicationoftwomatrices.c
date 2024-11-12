// #include <stdio.h>
// int main()
// {
//     int a[3][2]={{1,2},{3,4},{5,6}};
//     int b[2][4]={{1,2,3,4},{5,6,7,8}};
//     int res[3][4];
//     int cr=2;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             res[i][j]=0;
//             for(int k=0;k<cr;k++){
//                 res[i][j] += a[i][k]*b[k][j];
//             }
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             printf("%d ",res[i][j]);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter rows of first matrix: ");
    scanf("%d",&m);
    printf("Enter column of first matrix: ");
    scanf("%d",&n);
    printf("Enter rows of second matrix: ");
    scanf("%d",&p);
    printf("Enter column of second matrix: ");
    scanf("%d",&q);
    int a[m][n];
    int b[p][q];
    int res[m][q];
    int cr=n;
    printf("Enter the elements of first matrix--\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }printf("\n");
    printf("The first matrix is--\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    printf("Enter the elements of second matrix--\n ");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }printf("\n");
    printf("The second matrix is--\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d ",b[i][j]);
        }printf("\n");
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<cr;k++){
                res[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    printf("The multiplication of matrix is--\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}