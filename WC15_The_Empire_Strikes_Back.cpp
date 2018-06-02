#include <iostream>

using namespace std;

int main()
{
    int n,m,w[100],s=0;
    cin>>n>>m;
    for (int i=0;i<n;i++) cin>>w[i];
    
    for (int i=0;i<n;i++)
        if (w[i]<=m)
            s=s+w[i];
            
    cout<<s;
    return 0;
}
