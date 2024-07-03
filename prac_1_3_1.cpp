#include <iostream>
using namespace std;

void linear(int arr[],int n,int x)
{
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<i<<" is the position of your number"<<" "<<x;
            break;
        }
    }
}
int main() {
    int n,x;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter which number position you are find: ";
    cin>>x;
    linear(arr,n,x);
    return 0;
}
