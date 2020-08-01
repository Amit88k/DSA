#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    /*variable s store's the string input by the user
    p stores the modified string
    w stores the final string that we need to print*/

string s,p="",w="";
cin>>s;
//concatenated '.' at left side of string so that last word can be concatenated when . appears
s="."+s;
//q stores the length of the string
//i is a loop variable
int q=s.size()-1,i;
//traversing the string from right side
for(i=s.size()-1;i>=0;i--)
{
    //When . appears the this part will get executed
    if(s[i]=='.')
    {
    int j=i;
    //all the characters to the right of the . get stored till next . appears
    while(j<=q)
    {
    p=p+s[j];
    j=j+1;
    }
    q=i-1;// so that the size of remaining string is stored
    }
}
// As the first character is a dot which I have concatenated so run a loop from 1 position
for(int i=1;i<p.size();i++)
    w=w+p[i];//concatenate the characters in w and print them
cout<<w<<endl;
return 0;
}
