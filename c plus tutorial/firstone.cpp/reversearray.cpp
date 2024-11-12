#include<iostream>
using namespace std;

void reverseArray(int arr[],int size)
{
    int start=0;
    int end=size-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[7]={5,7,8,2,4,6,1};
    int brr[8]={3,4,5,6,7,8,9,1};

    
    reverseArray(arr,7);
    reverseArray(brr,8);

    printArray(arr,7);
    printArray(brr,8);


}