#include<iostream>
using namespace std;
int power_(int base,int power)
{
    int result=1;
    while(power!=0)
    {
        if(power%2==0)
        {
            base=base*base;
            power=power/2;
        }
        else
        {
            result=result*base;
            power=power-1;
        }

    }
    return result;
}
int main()
{
    int base,power,m,y,i,p;
    cin>>base;
    cin>>power;
    cin>>m;
    p=power;
    if(power%2==0)
        power=power/2;
    else
        power=power-1;

    y=power_(base,power);
    if(p%2==0)
        i=(((y%m)*(y%m))%m);
    else
        i=(((base%m)*(y%m))%m);
    cout<<i;
    return 0;
}
