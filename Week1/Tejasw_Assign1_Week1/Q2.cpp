#include<iostream>
using namespace std;
int main()
//Take a I/P number, print its table
//(eg: if n=3: Print: 3x1=3 3x2=6 ... 3x10=30)
{
    int n ;
    cin>>n;
    int i = 0;
    while(i<11)
    {
        cout<<n*i;
        cout<<"\n";
        i=i+1 ;
    }
}
