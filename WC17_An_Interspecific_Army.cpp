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
    int n;
    cin>>n;

    int a[n];
    int b[n];

    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++)
        cin>>b[i];

    int res = 0;
    sort(a,a+n);
    sort(b,b+n);

    for (int i=0;i<n;i++)
        res=max(res,abs(a[i]-b[i]));
    cout<<res<<endl;
    return 0;
}
