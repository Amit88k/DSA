#include<iostream>
using namespace std;
int main()
{
    int n,i,j,star=1;
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)// To print number
            cout<<j<<" ";
        if(i!=0) // To print stars after 1st line
        {
        for(j=1;j<=star;j++)// In each row stars get increased by 2
            cout<<"* ";
        star=star+2;
        }
        cout<<endl;
    }

    return 0;
}
