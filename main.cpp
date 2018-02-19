#include <bits/stdc++.h>

using namespace std;

#define EPS 1e-9
#define For(i,N) FOR(i,N)
#define Forr(i,a,b) FORR(i,a,b)
#define Fotr(i,a,b,c) FOTR(i,a,b,c)
#define FOR(i,N) FORR(i, 0, N)
#define FORR(i,a,b) FOTR(i, a, b, 1)
#define FOTR(i,a,b,c) for(int i=(a);i<(b);i+=(c))
#define FOREACH(i,x) for(__typeof__((x).begin())i=(x).begin();i!=(x).end();i++)
#define MEM(a,x) memset(a,x,sizeof(a))
#define BCHK(a,x) (((a)>>(x))&1)
#define BSET(a,x) ((a)|(1<<(x)))
#define BCLR(a,x) ((a)&(~(1<<(x))))
#define BTGL(a,x) ((a)^(1<<(x)))
#define FMT(...) (sprintf(CRTBUFF, __VA_ARGS__)?CRTBUFF:0)
#define read() freopen("input.txt","r",stdin)
#define write() freopen("output.txt","w",stdout)
#define cpp_io() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define BUFFSIZE 30000
#define INF 1000000000
#define MAX 300010
#define MOD 1000000007
#define pb push_back
#define mkpr make_pair
#define pii pair<int, int>
#define PI acos(-1)
#define ll double
#define fi first
#define si second
#define all(x) x.begin(), x.end()

char CRTBUFF[BUFFSIZE];
#define dbg(args...) {cerr<<"-->";debugger::call(#args,args);cerr<<"\n";}
struct debugger {
    static void call(const char* it) {}
    template<typename T, typename ... aT>
    static void call(const char* it, T a, aT... rest) {
        string b;
        for (; *it&&*it != ','; ++it) if (*it != ' ')b += *it;
        cerr << b << "=" << a << " ";
        call(++it, rest...);
    }
};


struct Line {
    ll a, b, get(ll x) { return a * x + b; }
};

struct ConvexHull {
    int size;
    Line *hull;

    ConvexHull(int maxSize) {
        hull = new Line[++maxSize], size = 0;
    }

    bool is_bad(int curr, int prev, int next) {
        Line c = hull[curr], p = hull[prev], n = hull[next];
        return (c.b - n.b) * (c.a - p.a) <= (p.b - c.b) * (n.a - c.a);
    }

    void add(ll a, ll b) {
        hull[size++] = (Line){a, b};
        while (size > 2 && is_bad(size - 2, size - 3, size - 1))
            hull[size - 2] = hull[size - 1], size--;
    }

    ll get(ll x) {
        int l = -1, r = size - 1;
        while (r - l > 1) {
            int m = (l + r) / 2;
            if (hull[m].get(x) >= hull[m + 1].get(x))l = m;
            else r = m;
        }
        return hull[r].get(x);
    }
};
int main(){
    cpp_io();
    #ifdef LOCAL
        read();
        //write();
    #endif
   return 0;
}