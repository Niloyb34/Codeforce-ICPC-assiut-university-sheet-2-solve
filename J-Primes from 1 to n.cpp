#include <stdio.h>

int main()
{
    int i,j,n,x;

    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        x=1;

        for(j=2; j<=i/2; j++)
        {

            if(i%j==0)
            {
                x=0;
                break;
            }
        }

        if(x==1)
        {
            printf("%d ",i);
        }
    }

    return 0;
}

