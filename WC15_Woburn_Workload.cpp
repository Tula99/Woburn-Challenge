#include <iostream>
#include <utility>
using namespace std;

int main()
{
    int n;

    cin>>n;

    pair <int,int> a[n];

    for (int i=0;i<n;i++)
    {
        cin>>a[i].first;
        cin>>a[i].second;
    }

    int p=0;
    int rez=0;

    for (int i=0;i<n;i++)
    {
        p+=a[i].second;

        if (p>a[i].first)
        {
            rez+=p-a[i].first;
            p=a[i].first;
        }
    }

    cout<<rez<<endl;
    return 0;
}
