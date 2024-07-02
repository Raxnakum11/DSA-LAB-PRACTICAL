#include<iostream>
using namespace std;

int main()
{
    string str;
    int count=0;
    int max=0;
    
    cout<<"Enter a string:";
    getline(cin,str);
  
   int n=str.length();
    
    for(int i=0;i<n;i++)
    {  
        if(str[i]!='.'){
        if(str[i]==' ')
        {
            count=0;
            continue;
        }
        count++;
        if(max<count)
        {
            max=count;
        }

    }
    }
    cout<<max;

    return 0;
}