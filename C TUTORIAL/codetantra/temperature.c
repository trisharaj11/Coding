#include <stdio.h>
int main()
{
    float f;
    printf("enter temp in fahrenheit: ");
    scanf("%f",&f);
    float temp=(f-32)*5/9;
    printf("The temp incentigrade is:%.2f\n",temp);
    
}