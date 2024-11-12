#include <stdio.h>
void preinpost(int x){
    if(x==0) return;
    printf("pre %d\n",x);
    preinpost(x-1);
    printf("in %d\n",x);
    preinpost(x-1);
    printf("post %d\n",x);
    return;
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    preinpost(n);
}