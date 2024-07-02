#include <iostream>
using namespace std;

int binarysearch(int arr[], int data, int n)
{
    int right = n, left = 0;

    while (left <= right)
    {
        int mid = right - (right + left) / 2;
        if (arr[mid] == data)
        {
            return mid;
        }
        else if (arr[mid] < data)
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
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> key;

    cout << binarysearch(arr, key, n) << endl;

    return 0;
}