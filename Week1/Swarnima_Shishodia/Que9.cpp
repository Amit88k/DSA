//Logic- To store factorial of a large number, an array is required.Each time a number is passed into multiple function to calculate the factoril

#include <iostream>

using namespace std;
int multiply(int x, int fact_size, int fact[]) //To miltiply the numbers to calculate factorial
{
    int carry=0;
    for(int i=0;i<fact_size;i++)
    {
        int product =fact[i]*x+carry;/* Each times array elemnt is multiplied by x then product is taken into two parts. First is carry and another is
                                       the number which we need to put at particular index*/

        fact[i]=product%10;
        carry=product/10;
    }
    while(carry!=0) //After multiplication if carry is left then it it put in array
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
