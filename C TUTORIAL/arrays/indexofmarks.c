//printing index number of marks which are less than 35 marks
#include <stdio.h>
int main()
{
    int marks[10];
    for(int i=0;i<=9;i++){
        printf("Enter element number %d\n ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<=9;i++){
        if(marks[i]<35)
        printf("%d ",i);
    }
}