#include <iostream>
using namespace std;

int binarysearch(int arr[], int key, int n)
{
    int right = n, left = 0;

    while (left <= right)
    {
        int mid = right - (right + left) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, key;
    cout<<"Enter array size:";
    cin >> n;

    int arr[n];
    cout<<"Enter array elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

  cout<<"Enter key:";
    cin >> key;

    cout << binarysearch(arr, key, n) << endl;

    return 0;
}
