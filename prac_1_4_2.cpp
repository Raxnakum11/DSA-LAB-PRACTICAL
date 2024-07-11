#include <iostream>
#include <algorithm>
using namespace std;

int specialArray(int nums[], int n)
{
    sort(nums, nums + n);

    int left = 0, right = n;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int count = 0;

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] >= mid)
            {
                count = n - i;
                break;
            }
        }

        if (count == mid)
        {
            return mid;
        }
        else if (count < mid)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
}

int main()
{

    int nums[] = {0, 4, 3, 0, 4};

    int n1 = sizeof(nums) / sizeof(nums[0]);

    cout << "Value of x: " << specialArray(nums, n1) << endl;

    return 0;
}

