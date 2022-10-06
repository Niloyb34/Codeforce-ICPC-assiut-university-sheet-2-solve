#include<stdio.h>
int main()
{
    int x,a,b,s,n,sum,i,r;
    sum=0;
    scanf("%d %d %d",&n,&a,&b);

    for(i=1 ; i<=n ; i++)
    {
        x=i;
        s=0;
        while(x>0)
    {
        r=x%10;
        s+=r;
        x /= 10;
    }
    if(a<=s && s<=b)
            sum +=i;
    }
    printf("%d",sum);
    return 0;
}

