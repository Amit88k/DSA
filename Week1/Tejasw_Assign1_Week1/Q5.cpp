#include<iostream>
using namespace std;
int main()
//Kaju Katli )
//  *
// * *
//* * *
// * *
//  *
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
//first for loop for rows
    {
        for(int j=1;j<=n;j++)
//second for loop for coloumns
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*"<<" ";
            }
        }
//this loop print n-i gaps and than *
        cout<<endl;

    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(j>=i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*"<<" ";
            }
        }
        //this loop print i gaps and than *
        cout<<endl;
    }
}
