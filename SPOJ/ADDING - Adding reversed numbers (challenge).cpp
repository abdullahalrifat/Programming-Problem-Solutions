/// Containers Start
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <cstdlib>
#include <iterator>
#include <algorithm>
/// C Header Files
#include <cstdio>
#include <cctype>
#include <cmath>
#include <math.h>
#include <ctime>
#include <cstring>
/// Containers End


using namespace std;

/// Math Start
#define PI                    acos(-1.0)
#define Pi                    3.141592653589793
#define SQR(n)                ( n * n )
/// Math End


/// Pair Start
#define ff                    first
#define ss                    second
#define mp                    make_pair
/// Pair End


/// Array Start
#define SET(a)                memset( a, -1,    sizeof a )
#define CLR(a)                memset( a,  0,    sizeof a )
#define MEM(a,val)            memset( a,  val,  sizeof(a) )
/// Array End


/// Extra Start
#define nn                    '\n'
#define pb                    push_back
#define SS                    stringstream
#define ull                   unsigned long long
#define mod                   1000000007
#define INF                   2147483647
#define SIZE                  2000001
#define _cin                  ios_base::sync_with_stdio(0);  cin.tie(0);
#define sz(a)                 int((a).size())
#define space                 " "
#define all(x)                (x).begin(), (x).end()
#define Ignore                cin.ignore()
#define StringToInt           if ( ! (istringstream(s) >> n) ) n = 0;
/// Extra End


/// Functions Start
template < class T > T Multiply( T a, T b ){return a * b ;}
template < class T > T larger( T a, T b ){return ( a > b ? a : b );}
template < class T > T smaller( T a, T b ){return ( a < b ? a : b );}
template<class T> T gcd(T a,T b){if(b == 0)return a;return gcd(b,a%b);}
template<class T> T lcm(T a, T b ){return (a*b)/gcd(a,b);}
template < class T > string converter( T n ){SS x;x << n;return x.str();}
/// Functions End

/// TypeDef Start
typedef  long long int           ll;
typedef  map<string,int>         msi;
typedef  map<int,int>	         mii;
typedef  map<ll, ll>             mll;
typedef  map<char,int>           mci;
typedef  map<int,string>	     mis;
typedef  pair<int,int> 	         pii;
typedef  pair<string, int>       psi;
typedef  pair<string, string>    pss;
typedef  vector<int> 	         vi;
typedef  vector<string> 	     vs;
typedef  vector<char>	         vc;
typedef  vector<bool>            vb;
typedef  vector< pii >           vii;
/// TypeDef End
/// I/O Start
#define pf1(a)                printf("%lld", a);
#define pc                    %
#define nd                    &

#define sf1(a)                scanf("%I64d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c)
#define sf4(a,b,c, d)         scanf("%d %d %d %d", &a, &b, &c, &d)

#define sf1ll(a)              scanf("%I64d", &a)
#define sf2ll(a,b)            scanf("%I64d %I64d", &a, &b)
#define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4ll(a,b,c, d)       scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)

#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);
/// I/O
int main()
{
    int n;
    sf1(n);
    while(n--)
    {
        int temp;
        sf1(temp);
        int temp1;
        sf1(temp1);
        string s = to_string(temp);
        string s2 = to_string(temp1);
        reverse(s.begin(),s.end());
        reverse(s2.begin(),s2.end());
        stringstream convert(s);
        int a;
        if ( !(convert >> a) ) a = 0;
        stringstream converts(s2);
        int b;
        if ( !(converts >> b) ) b = 0;
        int sum=a+b;
        string s3 = to_string(sum);
        s3.erase ( s3.find_last_not_of('0') + 1, std::string::npos );
        reverse(s3.begin(),s3.end());
        cout<<s3<<endl;
    }
    return 0;
}