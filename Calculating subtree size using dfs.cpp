#include<bits/stdc++.h>
using namespace std;
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
int vis[10001],subSize[10001];
vector<int>gp[10001];
int dfs(int node)
{
	vis[node]=1;
	int cnt=1;
	for(int child: gp[node])
	{
		if(vis[child]==0)
		{
			cnt+=dfs(child);
		}
	}
	subSize[node]=cnt;
	return cnt;
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        gp[u].push_back(v);
        gp[v].push_back(u);
    }
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        cout<<"The SubTree Of "<<i<<" Node Is: "<<subSize[i]<<nl;
    }
}
/*
INPUT
7 6
1 2
1 3
2 4
2 5
3 6
3 7
OUTPUT
The SubTree Of 1 Node Is: 7
The SubTree Of 2 Node Is: 3
The SubTree Of 3 Node Is: 3
The SubTree Of 4 Node Is: 1
The SubTree Of 5 Node Is: 1
The SubTree Of 6 Node Is: 1
The SubTree Of 7 Node Is: 1
*/

