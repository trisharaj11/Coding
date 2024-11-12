//using another parameter
#include <stdio.h>
void increasing(int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    increasing(x+1,n);
    return;
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}


//wihtout another parameter
#include <stdio.h>
void increasing(int x){
    if(x==0) return;
    increasing(x-1);
    printf("%d\n",x);
    return;
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    increasing(n);
}

