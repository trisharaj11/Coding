// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     cout<<"Enter Number: "<<endl;
//     cin>>a;
//     if(a<0){
//         cout<<"The number is negative";
//     }
//     else if(a>0){
//         cout<<"The number is positive";
//     }else{
//         cout<<"The number is zero";
//     }
// }

// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n>0){
//       cout<<n<<endl;
//       fun(n-1);
//     }
// }
// int main(){
//     int x=5;
//     fun(x);
// }

#include<iostream>
using namespace std;
int recur(int n){
    if(n>0){
        cout<<n<<endl;
        recur(n-1);
    }
}

int main(){
    int x=5;
    int res=recur(x);
    cout<<res<<endl;
}