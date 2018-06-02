#include <iostream>
#include <vector>
 
using namespace std;
 
vector <bool> prost(16000,true);
 
void sieve()
{
    for (int i=2;i*i<=16000;i++)
    {
        if (prost[i])
        {
            for (int j=i*2;j<=16000;j+=i)
                prost[j]=false;
        }
    }
}
 
int main()
{
    int n;
    cin>>n;
 
    sieve();
 
    while (n!=-1)
    {
        int p=0;
 
        if (n%2!=0) p=1;
 
        for (int i=1;i<=n/2+p;i++)
            if (prost[n-i] && prost[i]) cout<<i<<" "<<n-i<<endl;
        cout<<endl;
 
        cin>>n;
    }
    return 0;
}
