#include<stdio.h>
#include<string.h>
int main()
{
 int input1,input2,reminder,i,count,count2;
  scanf("%d %d",&input1,&input2);
  count2=0;
  i=input1;
  while(input1<=input2)
  {
      count=0;
      i=input1;
      while(i>0)
      {
          reminder=i%10;
          if(reminder != 4 && reminder != 7)
           {count=1;}
           i = i/10;
       }
     if(count==0)
        {
         printf("%d ",input1);
         count2=1;
        }
        input1++;
  }
  if(count2!=1)
  {
      printf("-1\n");
  }
  return 0;
}
