#include <iostream>
using namespace std;

unsigned int countsetbit(unsigned int x)
{
    int count=0;

    while(x!=0)
    {
        count=count+(x&1);
        x=x>>1;
    }return count;
}

int main()
{
    int a;
    cout<<"Enter the value of a:";
    cin>>a;

    int b;
    cout<<"Enter the value of b:";
    cin>>b;

    int x,y;
    x=countsetbit(a);
    y=countsetbit(b);
    int res=x+y;
    cout<<"The sum of set bit is:"<<res<<endl;
}