#include<cstdio>
#include<climits>
#include<iostream>
using namespace std;
#define mx 100001
int arr[mx];
int tree[mx*3];

void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    if(tree[left]<tree[right])
	{
		tree[node]=tree[left];
	}
	else
	{
		tree[node]=tree[right];
	}
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return INT_MAX;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    if(p1<p2)
	{
		return p1;
	}
	else
	{
		return p2;
	}
}
int main()
{
    int n,t,q;
    scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d %d",&n,&q);
		for(int i=1;i<=n;i++)
		 {
				scanf("%d",&arr[i]);
		 }
		init(1,1,n);
		int array[mx];
		for(int i=1;i<=q;i++)
		{
			int a,b;
			scanf("%d %d",&a,&b);
			int m=query(1,1,n,a,b);
			array[i]=m;
		}
		printf("Case %d:\n",i);
		for(int i=1;i<=q;i++)
		{
			printf("%d\n",array[i]);
		}

	}
    return 0;

}
