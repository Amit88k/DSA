#include<iostream>
using namespace std;
int main()
//Upward Star Triangle with n lines
//*
//* *
//* * *
{
    int n,k;
    cin>>n;
    for(int i=1,k=1;i<=n;i++)
//First for loop rows
    {
        for(int j=1;j<=i;j++)
// second for loop for coloumns
        {
            cout<<"*"<<" ";

        }
        cout<<endl;
    }
}
