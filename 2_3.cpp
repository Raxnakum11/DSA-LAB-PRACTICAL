#include<iostream>
#include<vector>
using namespace std;

int main(){

  int n,t;
  cin>>t;

  while(t--){
  cin>>n;
  vector<int> arr(10);
  for(int i=0;i<n;i++)
    {
    cin>>arr[i];
  }

  for(int i=0;i<n;i++){
    if(i%2==0 &&(arr[i]<=arr[i+1]) || i%2==0 &&(arr[i]>=arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  }

return 0;

}
