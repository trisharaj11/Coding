// #include <stdio.h>
// int main()
// {
//     int arr[3][3];
//     for(int i=0;i<=2;i++){
//         for(int j=0;j<=2;j++){
//             printf("enter elements: ");
//             scanf("%d ",&arr[i][j]);
//         }
//     }
    

//     for(int i=0;i<=2;i++){
//         for(int j=0;j<=2;j++){
//             printf("%d ",arr[i][j]);
//         }printf("\n");
//     }
    
//     return 0;

// }


// arr[0][0]=12;
    // arr[0][1]=18;
    // arr[1][0]=23;
    // arr[1][1]=14;

// #include <stdio.h>
// int main()
// {
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<=2;i++){
//         for(int j=0;j<=2;j++){
//             printf("%d ",arr[i][j]);
//         }printf("\n");
//     }
    
//     return 0;

// }


// #include <stdio.h>
// int main(){
//     int arr[4][2]={1234,56,1256,43,1267,34,1256,78};
//     for(int i=0;i<4;i++){
//         for(int j=0;j<2;j++){
//             printf("%d ",arr[i][j]);
//         }printf("\n");
//     }
// }

#include <stdio.h>
int main(){
        int arr[][2]={{1234,56},{1256,43}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
}