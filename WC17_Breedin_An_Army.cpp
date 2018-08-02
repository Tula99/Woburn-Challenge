#include <cstdio>


using namespace std;

int main()
{
    int m1,o1,l1;
    int m2,o2,l2;

    scanf("%d %d %d\n%d %d %d",&m1,&o1,&l1,&m2,&o2,&l2);

    int t=0;

    for (int i=1;i<=2000000;i++)
    {
        if (m1*i>m2 || o1*i>o2 || l1*i>l2) break;

        t++;
    }

    printf("%d",t);
    return 0;
}
