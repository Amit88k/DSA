//this code for checking divisilibity by 8
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    {
        if (((x >> 3) << 3) == x)
//if x right shift and left shift take place and after
//that it equal to x it mean it will be divible by 8
        cout<<"X is Divible by 8"<<endl;
        else
        cout<<"X is Not Divible by 8"<<endl;

        if (((y >> 3) << 3) == y)
//if x right shift and left shift take place and after
//that it equal to x it mean it will be divible by 8
        cout<<"Y is Divible by 8"<<endl;
        else
        cout<<"Y is Not Divible by 8"<<endl;

    }


}

