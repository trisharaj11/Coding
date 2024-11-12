#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
         mid=start+(end-start)/2;

    } return ans;
}

int lastocc(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;

    } return ans;
}

int main()
{
    int odd[14]={1,2,3,3,3,3,3,3,3,3,3,3,3,35};
    
    int total=(lastocc(odd,14,3)-firstocc(odd,14,3))+1;

    cout<<"The first occurrence of 3 is at index : "<<firstocc(odd,14,3)<<endl;
    cout<<"The last occurrence of 3 is at index : "<<lastocc(odd, 14,3)<<endl;
    cout<<"Total occurrence of 3 is : "<<total;
}