#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
/* Returns length of LCS for X[0..m-1], Y[0..n-1] */

/* Driver program to test above function */
int main()
{

    string s,t;
    cin>>s>>t;
    if(s!=t)cout<<max(s.length(),t.length());
    else cout<<-1<<endl;
    return 0;
}

