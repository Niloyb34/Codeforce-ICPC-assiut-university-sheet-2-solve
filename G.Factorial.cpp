#include <stdio.h>
int main()
{
    long long n,i,x,j=1,m;

    scanf("%lld",&m);

    while(j<=m)
    {
        x=1;
        scanf("%lld",&n);

        for(i=1; i<=n; i++)
        {
            x=x*i;
        }
        printf("%lld\n",x);
        j++;
    }
    return 0;
}
