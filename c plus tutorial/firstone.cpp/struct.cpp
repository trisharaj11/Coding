#include<iostream>
using namespace std;

struct Rectangle 
{
    int l;
    int b;
    
};// r1,r2,r3;//global
 
int main()
{ 
    struct Rectangle r={10,5};//local
    cout<<r.l<<endl;
    cout<<r.b<<endl;
    r.l=15;
    r.b=10;
    cout<<r.l<<endl;
    cout<<r.b<<endl;
    
    
    cout<<sizeof(struct Rectangle)<<endl;
    cout<<sizeof(r);
    
    
}