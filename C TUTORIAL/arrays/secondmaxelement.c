// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int max=INT_MIN;//sbse chotha number
//     int smax=INT_MIN;
//     for(int i=0;i<=7;i++)
//     {
//         if(max<arr[i])
//         max=arr[i];
//     }
//     for(int i=0;i<=7;i++)
//     {
//         if(arr[i]!=max && smax<arr[i])
//         smax=arr[i];
//     }
//     printf("The first largest number is: %d \n",max);
//     printf("The second largest number is: %d ",smax);
// }

#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
        printf("%d ",arr[i]);
    }

    int max=INT_MIN;//sbse chotha number
    int smax=INT_MIN;//value is=-2147483648
    for(int i=0;i<=n-1;i++)
    {
        if(max<arr[i])
     {
        smax=max;
        max=arr[i];
     }
    
    }
    
    printf("\nThe first largest number is: %d \n",max);
    printf("The second largest number is: %d ",smax);
}