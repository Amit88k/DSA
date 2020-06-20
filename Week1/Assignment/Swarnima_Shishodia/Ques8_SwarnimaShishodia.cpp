#include<iostream>
using namespace std;
int main()
{
    int n,i,j,star=1;
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
            cout<<j<<" ";
        if(i!=0)
        {
        for(j=1;j<=star;j++)
            cout<<"* ";
        star=star+2;
        }
        cout<<endl;
    }

    return 0;
}
