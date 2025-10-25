#include<iostream>
using namespace std;
int main()
{
    int arr[500];
   cout<<"enter the size of arr";
   int n;
   cin>>n;
   cout<<"enter the element of array";
   for(int i=0;i<n;i++)
   cin>>arr[i];
   for(int i=0;i<n;i++)
   {
    for(int j=i;j>0;j--)
    {
        if(arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
        }
        else{
            break;
        }
    }

   }
   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";


}