#include<iostream>
using namespace std;
int main()
{
    int i,j,n,space;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        //to print leftside numbers
        for(j=1;j<=i;j++)
          cout<<j<<" ";

        //to print spaces
        space=((n-i)*2)-1;
        for(j=1;j<=space;j++)
            cout<<"  ";
        if(i==n)
            j=i-1;
        else
        j=i;

        //to print right side numbers
        for(;j>=1;j--)
            cout<<j<<" ";
        cout<<endl;

    }
    return 0;
}
