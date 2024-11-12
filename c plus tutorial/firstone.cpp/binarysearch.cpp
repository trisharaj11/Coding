#include<iostream> //inc order
using namespace std;

int binarySearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])  //right wla
        {
            start=mid+1;
        }
        else    //left part
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[7]={1,2,3,4,5,6,7};

    int evenindex=binarySearch(even,6,5);
    cout<<"The index of 5 is="<<evenindex<<endl;


    int oddindex=binarySearch(odd,7,2);
    cout<<"The index of 2 is="<<oddindex<<endl;

    
}