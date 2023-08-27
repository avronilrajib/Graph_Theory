#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
int vis[1000],col[10000];
bool dfs(int node,int c)
{
    vis[node]=true;
    col[node]=c;
    for(int child:v[node])
    {
        if(vis[child]==0)
        {
            if(dfs(child,c^1)==false)
            {
                return false;
            }else {
                  if(col[node]==col[child])
                  {
                      return false;
                  }
            }
        }
    }
    return true;
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);

    }
    bool ans=dfs(1,1);
    if(ans==true)
    {
        cout<<"The Graph Is Bipartite"<<endl;
    }else
    {
        cout<<"The Graph Is Not Bipartite"<<endl;
    }

}
