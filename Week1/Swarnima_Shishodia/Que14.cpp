//To check whether n  is prime or not
/*Logic- All prime numbers can be represented in the form of 6k+1 and 6k-1 except 2 and 3 and does not get divided by a number which is represented as 6k-1
and 6k+1*/
#include<iostream>
using namespace std;
int main()
{
    int t,i,j,n,flag;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n==1)
            cout<<"No"<<endl;
        else if(n==2 || n==3)
            cout<<"Yes"<<endl; //To print 2 and 3
        else if(n%2==0 && n%3==0)
            cout<<"No"<<endl;
        else
        {
            flag=0;
            for(j=5;j<=n*n;j=j+6)
             {
            if(n%j==0 or n%(j+2)==0)
            {
              flag=1;
              break;
            }
             }
             if(flag==0)
                cout<<"Yes"<<endl;
             else
                cout<<"No"<<endl;
        }
    }
}
