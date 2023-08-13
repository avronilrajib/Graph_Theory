///Single Source Sortest Path (On Tree ) using DFS

#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int>v[100];
bool vis[100];
int dis[100];

void dfs(int n,int d)
{
    vis[n]=true;
    dis[n]=d;
    for(auto it: v[n])
    {
        if(vis[it]==false)
        {
            dfs(it,d+1);
        }
    }
}
int main()
{
    faster;
    int n,e;
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);

    }
      int x;cin>>x;
    dfs(x,0);
    for(int i=1;i<=n;i++)
    {
        cout<<x<<"-> "<<i<<" = "<<dis[i]<<endl;
    }


}


/*
input
10 7
1 2
1 3
3 4
3 5
6 7
8 9
8 10
1
output
1-> 1 = 0
1-> 2 = 1
1-> 3 = 1
1-> 4 = 2
1-> 5 = 2
1-> 6 = 0
1-> 7 = 0
1-> 8 = 0
1-> 9 = 0
1-> 10 = 0


*/

