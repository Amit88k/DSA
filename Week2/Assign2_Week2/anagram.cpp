#include<iostream>
using namespace std;

int main()
{
    char A[]="aman";
    char B[]="maan";
    int i,H[26]={0};//using hash table
    int flag=0;
    for(i=0;A[i]!='\0';i++)
    {

        //int aChar = H[i];
        H[A[i]-97]+=1;
//increasing hash table value by 1 if this condition hold

    }
    for(i=0;B[i]!='\0';i++)
    {

        H[B[i]-97]-=1;
//decreasing hash table value by 1 if this condition hold

        //int aChar = H[i];
        if(H[A[i]-97]<0)
        {
            cout<<"NOT ANAGRAM"<<endl;
            flag=1;
            break;
        }
        if(B[i]=='\0')
            cout<<"IT\'S ANAGRAM"<<endl;

    }
    if(flag==0)
        cout<<"its anagram"<<endl;
    else
        cout<<""<<endl;

}
