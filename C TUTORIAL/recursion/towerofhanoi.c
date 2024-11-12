#include <stdio.h>
void tower(int x,char s,char h,char d){  //s->source h->helper d->destination
    if(x==0) return;
    tower(x-1,s,d,h);
    printf("%c -> %c\n",s,d);
    tower(x-1,h,s,d);
    return;
}
int main()
{
    int n;
    printf("Enter number of disks: ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}