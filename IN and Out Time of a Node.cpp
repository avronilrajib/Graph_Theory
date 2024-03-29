
#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

vector<int>v[100000];
int vis[100000],in[100000],out[10000];
int t=1;

void dfs(int node)
{
    vis[node]=1;
    in[node]=t++;

    for(int child: v[node])
    {
        if(vis[child]==0)dfs(child);
    }
    out[node]=t++;
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);

    for(int i=1;i<=n;i++)
    {
        cout<<i<<" in time: "<<in[i]<<"  out time: "<<out[i]<<endl;
    }
}
