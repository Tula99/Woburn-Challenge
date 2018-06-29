#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <utility>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stdio.h>

using namespace std;

int n,m;
vector <vector <pair<int, int> > > graf(200001);
vector <int> flag(200001,false);
int rez = 0;

bool dfs2(int node, int par)
{
    bool curr = flag[node];

    for (int i=0;i<graf[node].size();i++)
        if ( par != graf[node][i].first && dfs2(graf[node][i].first,node) )
        {
            flag[graf[node][i].first]=true;
            curr = true;
        }

    return curr;
}

void dfs1(int node, int par)
{
    for (int i=0;i<graf[node].size();i++)
        if ( par != graf[node][i].first && flag[graf[node][i].first] )
        {
            rez+=graf[node][i].second;
            dfs1(graf[node][i].first,node);
        }
}

int main()
{
    cin>>n>>m;
    for (int i=0;i<n-1;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        graf[a].push_back({b,c});
        graf[b].push_back({a,c});
    }

    for (int i=0;i<m;i++)
    {
        int a; cin>>a;

        flag[a]=true;
    }

    dfs2(1,-1);
    dfs1(1,-1);

    cout<<rez<<endl;
    return 0;
}
