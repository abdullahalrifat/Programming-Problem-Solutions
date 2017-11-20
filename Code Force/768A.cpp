#include<cstdio>
#include<algorithm>
using namespace std;
#define maxn 100005
int arr[maxn];
int main() {
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr+1,arr+1+n);
    for(int i=2;i<=n;i++)
    {
        if(arr[i]>arr[1]&&arr[i]<arr[n])
        {
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
