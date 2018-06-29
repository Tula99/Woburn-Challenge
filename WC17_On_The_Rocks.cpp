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
    int n,m;
    cin>>n>>m;

    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    int b[n];
    for (int i=0;i<m;i++) cin>>b[i];

    int br1 = 0;
    for (int i=0;i<n;i++)
    {
        bool flag = true;
        for (int j=0;j<m;j++)
            if ( a[i] > b[j] )
                flag=false;

        if ( flag ) br1++;
    }

    int br2 = 0;
    for (int i=0;i<m;i++)
    {
        bool flag = true;
        for (int j=0;j<n;j++)
            if ( b[i] > a[j] )
                flag=false;

        if ( flag ) br2++;
    }

    cout<<br1<<" "<<br2<<endl;
    return 0;
}
