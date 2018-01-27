#include<cstdio>
#include<cmath>
#include<string>
#include<iostream>
using namespace std;
bool isPrime(int n)
{

    int squareRoot = sqrt(n);

    for (int i = 2; i <= squareRoot; i++) {
        if (n % i == 0)
        {
            return false;
        }

    }

    return true;
}
int main()
{
    string str;
    while(cin>>str)
    {
        int sum=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
            {
                sum+=str[i]-38;
            }
            else if(str[i]>='a'&&str[i]<='z')
            {
                sum+=str[i]-96;
            }
        }
        if(isPrime(sum))cout<<"It is a prime word."<<endl;
        else cout<<"It is not a prime word."<<endl;
    }
    return 0;
}