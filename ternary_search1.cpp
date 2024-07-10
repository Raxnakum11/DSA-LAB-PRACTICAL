
#include<iostream>
using namespace std;

int ternary(int arr[], int l, int r, int key) {
    while (l <= r) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (arr[mid1] == key) {
            return mid1;
        } else if (arr[mid2] == key) {
            return mid2;
        } else if (key < arr[mid1]) {
            r = mid1 - 1;
        } else if (key > arr[mid2]) {
            l = mid2 + 1;
        } else {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;
    int result = ternary(arr, 0, n - 1, key);

    if (result == -1) {
        cout << "Element is not present.";
    } else {
        cout << "Key is at index: " << result;
    }

    return 0;
}
