#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
bool vis[1000];
void dfs(int node)
{
    vis[node]=true;
    cout<<node<<" ";

    for(auto it:v[node])
    {
        if(vis[it]==false)
        {
            dfs(it);
        }
    }
}
int main()
{
    int node,edge;
    cin>>node>>edge;
    for(int i=0;i<edge;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);

    }
    dfs(1);
}
