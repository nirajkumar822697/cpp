#include<iostream>
using namespace std;
int k_missingnum(int arr[],int n,int k)
{
    
    int start=0,end=n-1,mid,ans=n;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if (arr[mid]-mid-1>=k) // use also this missing int missing = arr[mid] - (mid + 1);
        {
            ans=mid;
            end=mid-1;

        }
        else
        {
            start=mid+1;
        }
    }
    return ans+k;
}
int main()
{
    int arr[]={2,3,4,7,11,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=5;
    cout<<k_missingnum(arr,n,k);
}