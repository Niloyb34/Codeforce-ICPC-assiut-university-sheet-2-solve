#include<stdio.h>
  int main()
{
    int i,x,y;

    scanf("%d",&x);//x from the keyboard
    for(i=1;i<=12;i++)
    {
        y=x*i;
        printf("%d * %d = %d\n",x,i,y);
    }
     return 0;


}
