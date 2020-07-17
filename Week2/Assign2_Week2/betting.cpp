//c++ program for betting game

#include <iostream>
using namespace std;
//Initially, you are given with a string consisiting of
//characters from the set {'W', 'L'}, where 'W' indicates a win
//and 'L' indicates a loss, and initial sum is 4. Initial bet
//amount for the 1st round will be $1

int main() {
	//int t;
	//cin>>t;
	//while(t--)
	//{
	    string st;
	    cin>>st;
	    int s=4,b=1;int c=0;
	    for(int i=0;i<st.size();i++)
	    {
	        // below else loop came in picture If you win a round, the bet amount
	        //will be added to your current sum and next bet amount will become $1
	        if(st[i]=='W'){
	        s=s+b;b=1;}
	        else	        {
	            s=s-b;b=b*2;
	            // above else loop came in picture If you lose a round, the bet amount will be
	            //reduced from your current sum and next bet will become twice the previous.

	        if(s<b || i!=st.size()-1)
	        {
	            c=1;break;
	            // game ends either when all the rounds are
	            //complete or when you don't have sufficient sum.
	        }
	        }
	    }
	    if(c==1)
	    cout<<-1<<endl;
	    else
	    cout<<s<<endl;
	//}
	return 0;
}
