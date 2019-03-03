#include <iostream>
#include <utility>
#include <queue>
#include <cmath>
#include <vector>
#include <map>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ull unsigned long long

int main()
{
    ull n,m,k;
    cin>>n>>m>>k;

    vector <pair<ull, ull> > niz(n);
    map <ull, pair<ull, int> > mm;
    for (int i=0;i<n;i++)
    {
        cin>>niz[i].second>>niz[i].first;
        if ( mm[niz[i].second].first < niz[i].first )
        {
            mm[niz[i].second].first = niz[i].first;
            mm[niz[i].second].second = i;
        }
    }

    ull ostalo = m;
    ull suma = 0;
    ull raz = 0;

    for (int i=1;i<=k;i++)
    {
        suma+=mm[i].first;
        niz[mm[i].second].first = 0;
        ostalo--;
    }

    sort(niz.begin(), niz.end());

    for (int i=n-1;i>n-1-ostalo;i--)
    {
        suma+=niz[i].first;
    }

    cout<<suma<<endl;
    return 0;
}
