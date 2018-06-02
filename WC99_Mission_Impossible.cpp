#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

char m[21][21];
int r,c;

void heat(int x, int y)
{
    if (x>=r || x<0 || y>=c || y<0) return;
    if (m[x][y]=='0') return;

    m[x][y]='0';

    heat(x+1,y);
    heat(x-1,y);
    heat(x,y+1);
    heat(x,y-1);
}

int main()
{
    cin>>c>>r;

    while (c!=-1 && r!=-1)
    {
        for (int i=0;i<r;i++)
            for (int j=0;j<c;j++)
            cin>>m[i][j];

        for (int q=0;q<2000000;q++)
        {
            int p=-1;

            int x,y;
            for (int i=0;i<r;i++)
            {
                for (int j=0;j<c;j++)
                {
                    if (m[i][j]!='0')
                    {
                        x=i;
                        y=j;
                        p=1;
                        break;
                    }
                }
            }

            heat(x,y);

            if (p==-1)
            {
                cout<<q<<endl;
                break;
            }
        }

        cin>>c>>r;
    }
    return 0;
}
