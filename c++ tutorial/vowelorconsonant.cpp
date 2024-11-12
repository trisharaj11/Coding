#include <iostream>
using namespace std;

void vowelOrConsonant(char x){
    if(x=='a'|| x=='e' || x=='i' || x=='o' || x=='u' || x=='A'  || x=='E' || x=='I' || x=='O'|| x=='U'){
        cout<<"Vowel!";
    }else{
        cout<<"Consonant!";
    }
}
int main(){
    char c1;
    cout<<"Enter the character: "<<endl;
    cin>>c1;
    vowelOrConsonant(c1);
    

}