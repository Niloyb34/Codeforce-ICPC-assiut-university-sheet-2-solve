#include<stdio.h>
int main()
{
    int i,n,x,cnt1,cnt2,cnt3,cnt4;

    cnt1 = 0;
    cnt2 = 0;
    cnt3 = 0;
    cnt4 = 0;
    scanf("%d", &n);
   for(i = 1;i<= n;i++)
    {
        scanf("%d", &x);

        if(x % 2 == 0) cnt1++;

        if(x % 2 != 0) cnt2++;

        if(x > 0) cnt3++;

        if(x < 0) cnt4++;
    }
    printf("Even: %d\n", cnt1);
    printf("Odd: %d\n", cnt2);
    printf("Positive: %d\n", cnt3);
    printf("Negative: %d\n", cnt4);

    return 0;
}
