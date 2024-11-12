#include <stdio.h>
int main()
{
    int n;
    printf("ENTER A NUMBER WHICH IS TO BE REVERSED: ");
    scanf("%d",&n);
    int rev=0;
    int lastDigit=0;
    while(n!=0){
        lastDigit=n%10;//for remainder
        rev=rev*10+lastDigit;//for reversing
        n=n/10;//for removing last digit
    }printf("THE REVERSED NUMBER IS : %d",rev);
}

