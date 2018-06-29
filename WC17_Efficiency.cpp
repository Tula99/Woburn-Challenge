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

int main()
{
    int r,c;
    cin>>r>>c;

    vector <int> vi(c,0);
    vector <vector <int> > m(r,vi);

    int x,y;
    char a;
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            cin>>a;

            if ( a == 'H' ) { x=i;y=j; }
            else if ( a == 'C' ) m[i][j]=1;
        }
    }

    int br1 = 0;
    for (int i=x;i<r;i++) br1+=m[i][y];
    int br2 = 0;
    for (int i=0;i<x;i++) br2+=m[i][y];
    int br3 = 0;
    for (int i=y;i<c;i++) br3+=m[x][i];
    int br4 = 0;
    for (int i=0;i<y;i++) br4+=m[x][i];

    cout<<max(max(br1,br2),max(br3,br4))<<endl;
    return 0;
}
