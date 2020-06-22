//To print Downward Star Triangle

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter a number ";
    cin>>n;
    //Run a loop from n to 1.Inside it run another loop which will print exactly i stars
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }

    return 0;
}

