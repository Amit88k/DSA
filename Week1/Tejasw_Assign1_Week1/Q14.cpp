#include<iostream>
#include <cmath>
using namespace std;
//For a given number N check if it is prime or not.
//A prime number is a number which is only divisible by 1 and itself.
int main()
{
    int n,T,flag;
    cin>>T;
    for(int k=0;k<T;k++)
        //first loop for rows
    {
        cin>>n;
        flag=0;
        for(int i=2;i<=sqrt(n);i++)
        //second loop for coloumns
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
}
