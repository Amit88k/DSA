#include<iostream>
using namespace std;
int main()
//Downward Star Triangle with n lines
//* * * *
//* * *
//* *
//*
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
// First for loop for rows
    {
        for(int j=1;j<=(n-i);j++)
//second for loop for coloumns
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
