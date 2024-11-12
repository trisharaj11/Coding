#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0)
            printf("Fail ");
            else
            printf("Pass ");
        }printf("\n");
    }
}