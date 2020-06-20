#include <iostream>
using namespace std;
int multiply(int x, int fact_size, int fact[])
{
    int carry=0;
    for(int i=0;i<fact_size;i++)
    {
        int product =fact[i]*x+carry;
        fact[i]=product%10;
        carry=product/10;
    }
    while(carry!=0)
    {
        fact[fact_size]=carry%10;
        carry=carry/10;
        fact_size=fact_size+1;
    }
    return fact_size;
}
void factorial(int n)
{
    int fact[500];
    fact[0]=1;
        int fact_size=1;
    int i,x;
    for(x=2;x<=n;x++)
    fact_size=multiply(x,fact_size,fact);

    //cout<<fact_size<<"*\n";

    for(i=fact_size-1;i>=0;i--)
    cout<<fact[i];

    cout<<endl;
}
int main() {
	int i,t,n;
	cin>>t;
	for(i=0;i<t;i++)
	{
	  cin>>n;
	  factorial(n);
	}
	return 0;
}
