#include <iostream>

using namespace std;

int r,a,b;

int common()
{
    for (int i=max(a,b);i<=r;i+=max(a,b))
        if (i % a == 0 && i % b == 0) return i;
    return -1;
}

int main()
{
    int tests;
    cin>>tests;

    while (tests--)
    {
        cin>>r>>a>>b;

        if (a==b) cout<<r/a<<endl;
        else if (a%b==0) cout<<r/b<<endl;
        else if (b%a==0) cout<<r/a<<endl;
        else
        {
            int k3;
            int n=common();
            if (n==-1) k3=0;
            else k3=r/n;

            int k1=r/a;
            int k2=r/b;

            cout<<(k1+k2)-k3<<endl;
        }
    }
    return 0;
}
