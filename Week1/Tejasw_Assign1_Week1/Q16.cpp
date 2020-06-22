#include <iostream>
using namespace std;
int main()
//Given a positive integer N.
//The task is to check if N is a power of 2. That is N is 2x for some x.
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==0)
        {
            cout<<"NO"<<endl;
        }
        else if((n&(n-1))==0)
            {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
