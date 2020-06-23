#include<iostream>
using namespace std;
int main()
//Given a number n, print all primes smaller than n.
//For example, if the given number is 10, output 2, 3, 5, 7.
//(Segmented Sieve) NOTE: Time complexity (or number of operations)
//by Segmented Sieve is same as Simple Sieve. It has advantages for
//large ‘n’ as it has better locality of reference thus allowing
//better caching by the CPU and requires less memory space.
{
    int n,flag;
    cin>>n;
    for(int i=2;i<n;i++)
        //first loop for rows
    {
        flag=0;
        for(int j=2;j<i;j++)
        ////second loop for coloumns
        {
            /*if(i%j==0)
            {
                cout<<"This integer is not prime"<<i<<endl;
                break;
            }
            if(i%j!=0)
            {
                cout<<"This integer is prime"<<i<<endl;
            }*/
            if(i%j==0)
            {
                //cout<<"This integer is not prime"<<i<<endl;
                flag=1;
                break;
            }

        }
        if(flag==0){
            cout<<"the number " << i << " is prime"<<endl;
        }
        else
            cout<<"the number " << i << " is not prime"<<endl;
    }
}
