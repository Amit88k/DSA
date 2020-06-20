#include<iostream>
using namespace std;
int main()
{
    int i,j,a=0,b=1,c,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           if(i==1)
                cout<<a<<" ";
           else if(i==2 && j==1)
                cout<<b<<" ";
           else
           {
               c=a+b;
               cout<<c<<" ";
               a=b;
               b=c;
           }
        }
        cout<<endl;
    }
    return 0;
}
