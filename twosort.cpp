#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr(10);
    int n;
    cin>>n;
    for(int i=0 ;i<n; i++)
    {
        cin>>arr[i];
    }

    int j=0,Swap,Count=1;
    for(int i=5; i>=0; i--)
    {
        if(Count!=0){
        if(arr[i]<arr[i-1])
        {
            j = i;
            Count--;
        }}

      if(arr[j]>arr[i-1])
        {
           Swap = arr[i];
           arr[i]=arr[j];
           arr[j]=Swap;
           break;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";

    }

    return 0;

}
