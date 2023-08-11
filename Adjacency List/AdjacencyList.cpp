#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int>v[100];

int main()
{
    faster;
    int node,ver;
    cin>>node>>ver;
    for(int i=0;i<ver;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(int i=1;i<=node;i++)
    {
        cout<<i;
        for(int j=0;j<v[i].size();j++)
        {
            cout<<"->"<<v[i][j];
        }
        cout<<endl;
    }


 return 0;
}

/*
        5 4
        1 2
        1 3
        3 4
        3 5

        1->2->3
        2->1
        3->1->4->5
        4->3
        5->3
*/
