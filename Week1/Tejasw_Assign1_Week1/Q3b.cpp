#include<iostream>
using namespace std;
int main()
//Upward centered
//  *
// * *
//* * *
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
//First for loop for rows
    {
        for(int j=1;j<=n;j++)
//second for loop for coloumns
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
//this if loop gives n-i gaps and after that *
            else
            {
                cout<<"*"<<" ";
            }
        }
        cout<<endl;

    }
   /* for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*"<<" ";
            }
        }
        cout<<endl;

    }*/
}
