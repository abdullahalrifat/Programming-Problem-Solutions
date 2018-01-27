#include <cstdio>
#include<iostream>
using namespace std;
int modular(int base, unsigned int exp, unsigned int mod)
{
    int x = 1;
    int i;
    int power = base % mod;

    for (i = 0; i < sizeof(int) * 8; i++) {
        int least_sig_bit = 0x00000001 & (exp >> i);
        if (least_sig_bit)
            x = (x * power) % mod;
        power = (power * power) % mod;
    }

    return x;
}

int main(void) {
    int a,b;
    while( scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==EOF)
        {
            break;
        }
        printf("%d\n", modular(a, b, 10));
    }

}