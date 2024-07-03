#include<iostream>
using namespace std;





int main()
{
int n,x;
 cout<<"Enter array size:";
 cin>>n;

 int nums[n];
 for(int i=0;i<n;i++)
 {
   cin>>nums[i];
 }

 //cout << binarysearch(nums, x, n) << endl;
 int binarysearch(int nums[], int x, int n){

    int right = n, left = 0;

   int mid = right - (right + left) / 2;
    while (left <= right)
    {  int count=0;

        for(x=1;x<=n;x++)
 {
        if (x>=nums[mid])
        {
            count++;
        }
 }
        if(nums[mid]==count)
        {
            return mid;
        }
        else if (count<nums[mid])
        {
         right = mid - 1;
        }
        else
            {
        left=mid+1;
        }

    return -1;
}

    return 0;
}
}
}
