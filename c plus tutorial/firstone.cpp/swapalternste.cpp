#include<iostream>
using namespace std;

void swapAlternate(int arr[],int n)
{
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            // swap(arr[i],arr[i+1]);swap function breakdown
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int brr[7]={1,2,3,4,5,6,7};

    swapAlternate(arr,6);
    swapAlternate(brr,7);

    printArray(arr,6);
    printArray(brr,7);

}