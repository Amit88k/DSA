#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    for(int i=0,k=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<j<<" ";
            k++;

        }
        cout<<endl;
        for(int j=1;j<n;j++)
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
        cout<<endl;
    }
}

