#include<iostream>
using namespace std;

 int  searchMatrix(int matrix[][20], int rows, int cols, int x){

     int start=0,end=rows-1,mid;
    int r=-1;
    int c=-1;

    while(start<=end)
    {
        mid=(start+end)/2;
        if(matrix[mid][0]<=x && matrix[mid][cols-1]>=x)
        {
            r=mid;
            break;
        }
        if(matrix[mid][0]>x)
            end=mid-1;
        else
        {
            start=mid+1;
        }
    }
    if(r!=-1)
    {
        int start=0;
        int end=cols-1;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(matrix[r][mid]==x)
            {
                c=mid;
                break;
            }
            if(x<matrix[r][mid])
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
  
   }
int main()
{
    int rows,cols;
    cout<<"Enter no. of rows:";
    cin>>rows;
    cout<<"Enter no. of column:";
    cin>>cols;
    int matrix[rows][20];
 
   cout<<"Enter matrix elements:";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int x;
    cout<<"Enter search key:";
    cin>>x; 

   int result = searchMatrix(matrix, rows, cols, x);
   
    return 0;
}
