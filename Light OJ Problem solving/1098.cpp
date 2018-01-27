//
// Created by abdullah on 2/9/17.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    long long n;
    int cases = 0;
    int t;
    cin>>t;
    while(t--) {
        scanf("%lld", &n);
        long long ans = 0;
        for(int i=2;i*i<=n;i++)
        {
            long long int j=n/i;
            ans+=(j+i)*(j-i+1)/2;
            ans+=i*(j-i);
        }

        printf("Case %d: %lld\n", ++cases, ans);
    }
    return 0;
}