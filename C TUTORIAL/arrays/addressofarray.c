// #include <stdio.h>
// int main()
// {
//     int arr[5]={1,1,2,1,1};
//     printf("%p\n",&arr[0]);
//     printf("%p\n",&arr[1]);
//     printf("%p\n",&arr[2]);
//     printf("%p\n",&arr[3]);
//     printf("%p\n",&arr[4]);
    
// }

// #include <stdio.h>
// int main()
// {
//     int sub[50];
//     for(int i=0;i<=48;i++)
//     {
//         sub[i]=i;
//         printf("\n%d",sub[i]);
//     }
//}//output 0 1 2 3 4 5....48

#include <stdio.h>
int main()
{
    int i,a=2,b=3;
    int arr[2+3];
    for(int i=0;i<a+b;i++)
    {
        scanf("%d",&arr[i]);
        printf("\n%d",arr[i]);
    }
}

