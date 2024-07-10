#include<iostream>
using namespace std;


int bubble_sort(int arr[],int r)
{         int count=0;
    for(int i=0;i<r;i++){

        for(int j=0;j<r-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
             count++;
            }
        }
         if(count==0)
     {
     cout<<"Array is sorted."<<endl;
        break;
     }
    }

  for (int i = 0; i < r; i++) {
        cout<<arr[i] << " ";
    }
    cout << endl;

}


int main(){
  int arr[]={1,2,3,4};
  int n = sizeof(arr) / sizeof(arr[0]);

bubble_sort(arr,n);



 return 0;
}
