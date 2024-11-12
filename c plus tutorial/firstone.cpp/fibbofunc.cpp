#include<iostream>
using namespace std;

int fibbonacci(int x)
{
     int a=0;
     int b=1;
     cout<<a<<" "<<b<<" ";

     for(int i=2;i<x;i++)
    {
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    cout<<fibbonacci(n);

   
}