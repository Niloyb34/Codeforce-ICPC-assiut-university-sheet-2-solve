#include<stdio.h>
int main()
{

    int row,col,n;
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {

        for(col=1; col<=n-row; col++)
            printf(" ");
        for(col=1; col<=2*row-1; col++)


          {
              printf("*");
          }

        printf("\n");

    }

    for(row=n; row>=1; row--)/*aikane shape 3 er mto brabor shape akthe majkhaner line take duibar dekhate hbe tie 23
        no for er row er jir=egie row=n and condition er jnno row>=1 korte hbe*/
    {

        for(col=1; col<=n-row; col++)
            printf(" ");
        for(col=1; col<=2*row-1; col++)


          {
              printf("*");
          }

        printf("\n");

    }

}
