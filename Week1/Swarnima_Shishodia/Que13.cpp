//To calculate the power of a number
#include<iostream>
using namespace std;
int power_(int base,int power)
{
    int result=1;
    while(power!=0)
    {
        if(power%2==0)
        {
            base=base*base; //If power is even then take square of the base and divide the power by 2
            power=power/2;
        }
        else
        {
            result=result*base; //If power is odd then multiply base by result
            power=power-1; //and decrease the power by 1
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
        power=power/2; //If power is even divide it by 2
    else
        power=power-1; // If power is odd subtract it by 1

    y=power_(base,power);
    if(p%2==0)
        i=(((y%m)*(y%m))%m);//Using the properties
    else
        i=(((base%m)*(y%m))%m);
    cout<<i;
    return 0;
}
