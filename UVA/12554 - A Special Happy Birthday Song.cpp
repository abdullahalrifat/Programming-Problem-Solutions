#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int n,j,k,ans1,ans2;
    string song[20];
     song[0]="Happy";
     song[1]="birthday";
     song[2]="to";
     song[3]="you";
     song[4]="Happy";
     song[5]="birthday";
     song[6]="to";
     song[7]="you";
     song[8]="Happy";
     song[9]="birthday";
     song[10]="to";
     song[11]="Rujia";
     song[12]="Happy";
     song[13]="birthday";
     song[14]="to";
     song[15]="you";
string names[110];
	cin>>n;
  for(int i=0;i<n;i++)
  {
        cin>>names[i];
  }
  ans1=n/16;
  ans2=n%16;
  if(ans2>0)
  {
	  ans1++;
  }
  ans1=ans1*16;
  for(int i=0,j=0,k=0;k< ans1;k++)
  {
      cout<<names[i]<<":"<<" "<<song[j]<<endl;
	  i++;
	  j++;
	 if(i==n)
	  {
		  i=0;
	  }
	 if(j==16)
	 {
		 j=0;
	 }
  }
	return 0;
}
