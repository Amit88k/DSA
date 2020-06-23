#include<iostream>
using namespace std;
int main()
//Given a number n, print all primes smaller than or equal to n.
//It is also given that n is a small number.
{
    int n,flag;
    cin>>n;
    for(int i=2;i<=n;i++)
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

       /* if(n%i==0)
        {
            cout<<"Not prime"<<endl;
        }*/
    }
}
