#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n];

    for (int i=0;i<n;i++) cin>>A[i];

    int t;
    cin>>t;
    int r;
    while (t--)
    {
        cin>>r;
        int br=0;

        for (int i=0;i<n;i++)
        {
            int suma=0;
            for (int j=i;j<n;j++)
            {
                if (suma==r) br++;
                else if (suma>r) break;
                suma+=A[j];
            }
        }
        cout<<br<<" ";
    }
    return 0;
}
