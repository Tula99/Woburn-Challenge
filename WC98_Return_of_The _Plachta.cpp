#include <iostream>

using namespace std;

int nzd(int a, int b)
{
    if (b==0) return a;
    return nzd(b,a%b);
}

int nzs(int a, int b) { return (a*b)/nzd(a,b); }

int main()
{
    for (int i=0;i<5;i++)
    {
        int a,b,c,d;

        cin>>a>>b>>c>>d;

        int zaj=nzs(b,d);

        int p1,p2;
        p1=zaj/b;
        p2=zaj/d;

        int g=a*p1+c*p2;

        int dij=nzd(g,zaj);
        g/=dij;
        zaj/=dij;

        if (g==0) cout<<0<<endl;
        else if (zaj==1) cout<<g<<endl;
        else cout<<g<<" "<<zaj<<endl;
    }
    return 0;
}
