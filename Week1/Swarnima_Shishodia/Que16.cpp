#include<iostream>
using namespace std;
int main()
{
    int t,i,j,a,b;
    cin>>t;
    uint64_t n;
    if(n==0)
    cout<<"NO";
    else
    {
    for(i=0;i<t;i++)
    {
        cin>>n;
        if((n&(n-1))==0)
            cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    }
return 0;
}
