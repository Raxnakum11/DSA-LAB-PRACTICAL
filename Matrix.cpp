#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
    int Row,Colum;
    cin>>Row>>Colum;
    int arr[Row][Colum];

    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Colum;j++)
        {
            cin>>arr[i][j];
        }
    }

    int X;
    cin>>X;
    int start=0,end=Row-1,mid;
    int r=-1;
    int c=-1;

    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid][0]<=X && arr[mid][Colum-1]>=X)
        {
            r=mid;
            break;
        }
        if(arr[mid][0]>X)
            end=mid-1;
        else
        {
            start=mid+1;
        }
    }
    if(r!=-1)
    {
        int start=0;
        int end=Colum-1;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(arr[r][mid]==X)
            {
                c=mid;
                break;
            }
            if(X<arr[r][mid])
            {
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
    }


    if(r!=-1 && c!=-1)
    {
        cout << "(" << r << "," << c << ")";
    }
    else {
        cout<<-1;
    }
    return 0;
}
