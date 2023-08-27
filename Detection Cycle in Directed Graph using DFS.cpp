#include<bits/stdc++.h>
using namespace std;

vector<int>v[100004];
int vis[100003];

bool dfs(int node)
{
    vis[node]=1;
    for(int child: v[node])
    {
        if(vis[child]==0)
        {
            if(dfs(child)==true)return true;
        }
        else
        {
            if(vis[child]==1)return true;
        }
    }
    vis[node]=2;
    return false;
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

    }
    bool ans = dfs(1);
    if(ans==true)cout<<"Cycle Found"<<endl;
    else cout<<"NOT cycle Found"<<endl;
}
