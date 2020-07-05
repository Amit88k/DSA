//Remove Duplicates
//Problem: Given a string, the task is to remove duplicates from it.
//Expected time complexity O(n) where n is length of input string and
//extra space O(1) under the assumption that there are total 256 possible characters in a string.
//Note: that original order of characters must be kept same.
//Input: geek
//Output: gek
//Input: learning data structures and algorithms is important
//Output: learnig dt stuc ohm po

#include<iostream>
using namespace std;

int main()
{
    char A[]="learning data structures and algorithms is important ";
    int i,H[26];
    int flag=0;
    for(int m=0;m<26;m++){
        H[m]=0;
    }
    for(i=0;A[i]!='\0';i++)
    {

        //int aChar = H[i];
        if(int(A[i])!=13)
            H[A[i]-97]+=1;
        else
            H[A[i]]+=1;
            //continue;

    }

    for(int r=0;A[r]!='\0';r++){
        if(int(A[r])!=13){
            if(H[int(A[r])-97]>=1){
                cout<<A[r];
                H[int(A[r])-97]=0;
            }
        }
        if(int(A[r])==13)
            cout<<" ";
    }

}
   /* for(i=0;i<26;i++)
    {
        if(H[i]>1)
        {

            //cout<<char(i+97)<<" ";
            //flag=1;
            cout<<char(i+97)<<" ";
            continue;
            H[i]=0;
        }
        //if(H)
    }
   if(flag==0)
        cout<<"NO Duplicate"<<endl;
    else
        cout<<"Duplicate"<<endl;*/
