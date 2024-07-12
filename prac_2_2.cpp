#include<iostream>
using namespace std;

void sortTwoSwapped(int arr[], int n) {
  int low = 0, mid = 0, high = n - 1;

  // Find the two swapped elements
  while (mid <= high) {
    if (arr[mid] < arr[low]) {
      swap(arr[low], arr[mid]);
      low++;
      mid++;
    } else if (arr[mid] > arr[high]) {
      swap(arr[mid], arr[high]);
      high--;
    } else {
      mid++;
    }
  }

  // Correct the position of the first swapped element
  while (low < mid) {
    if (arr[low] > arr[mid - 1]) {
      swap(arr[low], arr[mid - 1]);
      low++;
    } else {
      break;
    }
  }
} 
int main() {
  int arr[] = {3, 8, 6, 7, 5, 9};
  int n = sizeof(arr) / sizeof(arr[0]);

  sortTwoSwapped(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}