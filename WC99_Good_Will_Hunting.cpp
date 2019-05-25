#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
#include <utility>
#include <stdio.h>

using namespace std;

int main()
{
    double a;
    cin>>a;

    while (a != 0)
    {
        int br = 0;
        if ( abs(a) < 1.0 )
        {
            while ( abs(a) < 1.0 ) { a*=10.0; br++; }

            br*=(-1);
        }
        else
        {
            while ( abs(a) >= 10 ) { a/=10.0; br++; }
        }

        if ( br == 0 ) cout<<setprecision(3)<<fixed<<a<<endl;
        else cout<<setprecision(3)<<fixed<<a<<" x 10^"<<br<<endl;
        cin>>a;
    }
    return 0;
}
