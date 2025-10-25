// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[8]={8,7,6,5,4,3,2,1};
//     for(int i=0;i<8;i++)
//     {
//         int index=i;
//         for(int j=i+1;j<8;j++)
//         {
//             if(arr[j]<arr[index])
//             {
//                 index=j;
//             }
//             swap(arr[i],arr[index]);
//         }
//     }
//     for(int i=0;i<8;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }


//take input from user then sort the array
#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout<<"enter size of the array";
    cin>>n;
    cout<<"enter array of element";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n-1;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if (arr[i]<arr[index])
            {
                index=j;
            }
            swap(arr[j],arr[index]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
}





