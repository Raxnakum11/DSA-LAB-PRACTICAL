// #include<iostream>
// #include<vector>
// using namespace std;

// void radixSort(vector<int> &v){
//  int max_ele = INT_MIN;
//  for(){}

//  for(int pos=1;max_ele/pos>0;pos*=10){
//     countSort(v,pos);
//  }
// }

// int main(){

//     int n;
//     cin>>n;

//     vector<int> v(n);
// for(int i=0;i<n;i++){
//     cin>>v[i];
// }

//  radixSort(v);
//  for(int i=0;i<n;i++){
//     cout<<v[i]<<"";
//  }cout<<endl;
//     }


#include <iostream>
using namespace std;

// Function to get the maximum element in the array
int getMax(int arr[], int n) {
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

// Function to perform counting sort based on significant places
void countSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    // Store count of occurrences in count[]
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Change count[i] so that count[i] now contains actual position of this digit in output array
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[], so that arr[] now contains sorted numbers according to current digit
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Function to perform radix sort
void radixSort(int arr[], int n) {
    int m = getMax(arr, n);

    // Perform counting sort for every digit. Note that instead of passing digit number, exp is passed.
    // exp is 10^i where i is the current digit number
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    radixSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}