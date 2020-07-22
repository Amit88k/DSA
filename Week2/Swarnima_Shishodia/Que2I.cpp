#include <iostream>
using namespace std;
int main()
{
int t;
	cin>>t;
	while(t--)
	{
	    string st;
	    cin>>st;
	    int s=4,b=1,c=0;
	    for(int i=0;i<st.size();i++)
	    {
	        if(st[i]=='W')
            {
	        s=s+b;
	        b=1;
            }
	        else
	        {
	            s=s-b;
	            b=b*2;
	        if(s<b&&i!=st.size()-1)
            {
	            c=1;
	            break;
	        }
	        }
	    }
	    if(c==1)
	    cout<<-1<<endl;
	    else
	    cout<<s<<endl;
	}
	return 0;
}
