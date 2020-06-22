#To print the table of a number

#include<iostream>
using namespace std;
int main()
{
    long long int n;
    int i;

    cout<<"Enter a number ";
    cin>>n;

    //Print the table
    for(i=1;i<=10;i++)
        cout<<n<<"*"<<i<<"="<<n*i<<endl;

    return 0;
}

