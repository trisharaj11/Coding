//for finding combination

#include <stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }return fact;
}
int main()
{
    int n;
    printf("ENTER n: ");
    scanf("%d",&n);
    int r;
    printf("ENTER r: ");
    scanf("%d",&r);
    int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(n-r);

    int ncr=nfact/(rfact*nrfact);
    printf("THE COMBINATION IS %d",ncr);
}
