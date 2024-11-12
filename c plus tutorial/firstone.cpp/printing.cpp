#include <iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    int res=sum(a,b);
    cout<<"The sum is:"<<res<<endl;

}