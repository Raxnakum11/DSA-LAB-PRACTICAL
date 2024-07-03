#include<iostream>
using namespace std;

int main(){
 int n,x;
 cout<<"Enter array size:";
 cin>>n;

 int nums[n];
 for(int i=0;i<n;i++)
 {
   cin>>nums[i];
 }

 for(x=1;x<=n;x++)
 {

     int count=0;
 for(int i=0;i<n;i++)
  {
    if(nums[i]>=x)
     {
        count++;
     }

  }
   if(count==x)
     {
        cout<<x;
        break;
     }
 }
 return -1;
  }
