//
// Created by abdullah on 4/15/17.
//


#include<cstdio>
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
    tree[node]=tree[left]+tree[right];
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1+p2;
}

void update(int node, int b, int e, int i, int newvalue) //update ith index
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        arr[i]+=newvalue;
        tree[node] = arr[i];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        init(1,1,n);
        printf("Case %d:\n",i);

        for(int j=0;j<q;j++)
        {
            int f;
            scanf("%d",&f);
            if(f==1)
            {
                int node;
                scanf("%d",&node);
                printf("%d\n",arr[node+1]);
                arr[node+1]=0;
                update(1,1,n,node+1,0);
            }
            else if(f==2)
            {
                int money,node;
                scanf("%d  %d",&node,&money);
                update(1,1,n,node+1,money);
            }
            else if (f==3)
            {
                int start,end;
                scanf("%d %d",&start,&end);
                printf("%d\n",query(1,1,n,start+1,end+1));
            }


        }

    }
    return 0;

}