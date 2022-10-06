#include <stdio.h>

int main()
{
  int i,num,n,large=0;
  scanf("%d",&n);

  for(i=1; i<=n; i++)
  {
    scanf("%d",&num);
    if(num>large)
    large=num;
  }

  printf("%d",large);
  return 0;
}
