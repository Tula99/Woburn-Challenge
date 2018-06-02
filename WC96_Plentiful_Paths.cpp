#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int m[101][101];
int r,c;

int main()
{
    cin>>r>>c;

    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
        m[i][j]=0;

    int x,y;
    cin>>x>>y;

    while (x!=0 && y!=0)
    {
        m[x-1][y-1]++;

        cin>>x>>y;
    }

    int t[r][c];
    int br=0;

    for (int i=r-1;i>=0;i--)
    {
        for (int j=0;j<c;j++)
        t[br][j]=m[i][j];
        br++;
    }

    for (int i=r-2;i>=0;i--)
        t[i][0]+=t[i+1][0];

    for (int i=1;i<c;i++)
        t[r-1][i]+=t[r-1][i-1];

    for (int i=r-2;i>=0;i--)
        for (int j=1;j<c;j++)
            t[i][j]+=max(t[i+1][j],t[i][j-1]);

    cout<<t[0][c-1]<<endl;
    return 0;
}
