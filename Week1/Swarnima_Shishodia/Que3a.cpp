//To print a upward Star Triangle

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter a number ";
    cin>>n;

    //Run first loop till n and inside that print the number of star for each line which is always equal to the i

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }

    return 0;
}

