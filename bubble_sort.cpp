#include<iostream>
using namespace std;

void bubble_sort(int arr[], int r) {
    

    for(int i = 0; i < r; i++) {
        int swaps = 0;  // Track swaps within each pass
        for(int j = 0; j < r - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swaps++;
            }
        }

        if (i == 0 && swaps == 0) {  // If no swaps were made in the first pass
            cout << "Array is already sorted." << endl;
            break;
        }
        
        
    }

    for(int i = 0; i < r; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

    return 0;
}

