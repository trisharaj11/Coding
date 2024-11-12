// #include <stdio.h>
// int main()
// {
//     int a=5;
//     int* x=&a;//pointer storing the address
//     printf("%p\n",x);
//     printf("%p\n",&x);//address of pointer
//     printf("%d\n",*x);//point the value of which address is stored
//     } 

#include <stdio.h>
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    int b;
    printf("Enter b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("THE SWAPPED VALUE OF A IS %d\n",a);
    printf("\nTHE SWAPPED VALUE OF B IS %d\n",b);

}     


