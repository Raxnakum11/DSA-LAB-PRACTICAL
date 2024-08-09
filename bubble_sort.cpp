#include<iostream>
using namespace std;

void bubble_sort(int arr[], int r) {
    int count;
    for(int i = 0; i < r; i++) {
        count = 0;  // Reset count for each pass
        for(int j = 0; j < r - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                count++;
            }
        }
        if(count == 0) {
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

