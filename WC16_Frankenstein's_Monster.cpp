#include <iostream>

using namespace std;

int main()
{
    int d;
    string b;
    getline(cin,b);

    b='.'+b+'.';

    for (int i=1;i<b.length();i++)
        if ((b[i-1]=='.')&&(b[i]=='F')&&(b[i+1]=='r')&&(b[i+2]=='a')&&(b[i+3]=='n')&&(b[i+4]=='k')&&(b[i+5]=='e')&&(b[i+6]=='n')&&(b[i+7]=='s')&&(b[i+8]=='t')&&(b[i+9]=='e')&&(b[i+10]=='i')&&(b[i+11]=='n')&&(b[i+12]=='.'))
          b.replace(i,12,"Frankenstein's.monster");
          
    for (int i=1;i<b.length()-1;i++)
        cout<<b[i];
    return 0;
}
