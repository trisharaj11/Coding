#include <stdio.h>
int even(int n){
    return (n%2==0);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    if(even(n)) printf("THE ENTERED NUMBER IS EVEN");
    else printf("THE ENTERED NUMBER IS ODD");
    
}