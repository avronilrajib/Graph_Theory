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

vector<int>v[100001];
int vis[100001];

bool dfs(int node,int par)
{
    vis[node]=1;
    for(int child: v[node])
    {
        if(vis[child]==0)
        {
            if(dfs(child,node)==true)return true;
        }
        else
        {
            if(child!=par)return true;
        }
    }
    return false;
}
int main()
{
    faster;
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bool ans = dfs(1,-1);
    if(ans==true)cout<<"Cycle"<<endl;
    else cout<<"NOt cycle"<<endl;
}
/*
Input
5 4
1 2
2 3
2 4
4 5
Output
NOt cycle

Input
5 5
1 2
2 3
2 4
3 4
4 5
Output
Cycle
*/
