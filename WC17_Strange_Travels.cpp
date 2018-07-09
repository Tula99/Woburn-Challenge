#include <iostream>
#include <set>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
#include <stack>

using namespace std;

int n,m;
vector <vector <int> > graf1(100001),graf2(100001);
vector <int> uda1(100001,-1),uda2(100001,-1);

void BFS1()
{
    queue <int> q;
    q.push(1);
    int sad;
    uda1[1]=0;

    while (q.empty() == false)
    {
        sad=q.front();
        q.pop();

        for (int i=0;i<graf1[sad].size();i++)
        {
            if ( uda1[graf1[sad][i]] < 0 )
            {
                q.push(graf1[sad][i]);
                uda1[graf1[sad][i]] = uda1[sad] + 1;
            }
        }
    }
}

void BFS2()
{
    queue <int> q;
    q.push(1);
    int sad;
    uda2[1]=0;

    while (q.empty() == false)
    {
        sad=q.front();
        q.pop();

        for (int i=0;i<graf2[sad].size();i++)
        {
            if ( uda2[graf2[sad][i]] < 0 )
            {
                q.push(graf2[sad][i]);
                uda2[graf2[sad][i]] = uda2[sad] + 1;
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for (int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        graf1[a].push_back(b);
        graf2[b].push_back(a);
    }

    int k;
    cin>>k;

    int san[k];
    for (int i=0;i<k;i++) cin>>san[i];

    BFS1();
    BFS2();

    int warps = 0;
    for (int i=0;i<k;i++)
    {
        if ( uda1[san[i]] < 0 || uda2[san[i]] < 0 ) { warps=-1;  break; }
        warps+=(uda1[san[i]]+uda2[san[i]]);
    }

    cout<<warps<<endl;
    return 0;
}
