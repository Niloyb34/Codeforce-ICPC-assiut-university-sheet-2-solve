#include<stdio.h>
int main()
{
    int x,y,z,k,s,cnt;
    cnt=0;
    scanf("%d %d",&k,&s);
    for(x=0;x<=k;x++)
       for(y=0;y<=k;y++)
    {
       z=s-(x+y);
    if(0<=z && z<=k)
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}

