#include <iostream>

using namespace std;

int main()
{
    int w;
    cin>>w;
    int br = 0;

    for (char i='a';i<='z' && br < w;i++,br++) cout<<i<<" ";
    for (char i='a';i<='z' && br < w;i++)
        for (char j='a';j<='z' && br < w;j++, br++)
            cout<<i<<j<<" ";

    for (char i='a';i<='z' && br < w;i++)
        for (char j='a';j<='z' && br < w;j++)
            for (char k='a';k<='z' && br < w;k++, br++)
                cout<<i<<j<<k<<" ";
    return 0;
}
