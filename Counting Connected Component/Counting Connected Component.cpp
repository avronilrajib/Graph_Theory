///Counting Connected Component
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int>v[1000];
bool vis[1000];

void dfs(int n)
{
    vis[n]=true;
    for(auto it: v[n])
    {
        if(vis[it]==false)
        {
            dfs(it);
        }
    }
}
int main()
{
    faster;
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);

    }
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==false)
        {
            c++;
            dfs(i);
        }
    }
    cout<<c<<endl;
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
output
3

*/
