#include<iostream>
using namespace std;

 void  Sort_array(int arr[], int n){
int first=-1;
      for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            first = i;
            break;
        }
    }

     if (first == -1) {
        return;
    }

   int  second=-1;
      for (int i = n-1 ; i >0; i--) {
        if (arr[i] < arr[i - 1]) {
            second = i;
            break;
        }
    }


  int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;


 }

int main(){

  int arr[] ={3,8,6,7,5,9};

  int n= sizeof(arr)/sizeof(arr[0]);
 Sort_array(arr, n);


for(int i=0;i<n;i++){
    cout <<arr[i]<<" ";
}

return 0;
}


