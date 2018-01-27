//
// Created by abdullah on 2/9/17.
//

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
bool isPrime(int n)
{
    if (n < 2) return false;

    int squareRoot = (int)sqrt(n);

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
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        cout<<"Case "<<i<<": "<<n<<" =";
        for(int j=2;j<=n;j++)
        {
            if(isPrime(j))
            {
                if(j>2)
                {
                    cout<<" *";
                }
                cout<<" "<<j;
                int s=0;
                int k=1;
                while(true)
                {
                    int x=(n/powf(j,k));
                    if(x==0)
                        break;
                    s+=x;
                    k++;
                }
                cout<<" ("<<s<<")";
            }
        }
        cout<<endl;

    }

    return 0;
}
