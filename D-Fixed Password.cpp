#include <stdio.h>
int main()
{
	long long pass, x=1;

	while (x!=0)
	{
	scanf("%lld",&pass);

	if (pass==1999)
	{
		printf("Correct");
		x=0;
    }
    else
    {
       printf("Wrong");
	}
	printf("\n");
   }
	return 0;
}
