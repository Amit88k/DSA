#include<iostream>
using namespace std;
//GCD of two numbers
int gcd(int n1,int n2)
{
    if(n2==0)
        return n1;
    else
     return gcd(n2,n1%n2);
}
int main()
{
    int n1,n2,result;
    cin>>n1;
    cin>>n2;
    result=gcd(n1,n2);
    cout<<result<<endl;
    return 0;
}
