#include <iostream>
#include <list>
using namespace std;
void display(list <int> &lst)
{
    list <int> :: iterator itr;
    for(itr=lst.begin();itr!=lst.end();itr++){
        cout<<*itr<<" ";
    }
}
int main(){
    list <int> list1;
    list1.push_back(9);
    list1.push_back(0);
    list1.push_back(4);
    list1.push_back(7);
    display(list1);
}
 