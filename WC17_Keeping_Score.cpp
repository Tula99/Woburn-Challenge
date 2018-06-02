#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <algorithm>

using namespace std;

int l,g;

int main()
{
    cin>>l>>g;

    int sl[l];
    int sg[g];

    for (int i=0;i<l;i++) cin>>sl[i];
    for (int i=0;i<g;i++) cin>>sg[i];

    sort(sl,sl+l);
    sort(sg,sg+g);
    l--;

    for (int i=g-1;i>=0;i--)
    {
        if (sg[i]>sl[l])
        {
            cout<<sg[i]<<endl;
            return 0;
        }
        l--;
    }

    cout<<-1<<endl;
    return 0;
}
