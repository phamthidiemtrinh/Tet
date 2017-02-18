#include <stdio.h>
void main ()
{
   int n,i,j,a[10][10],d;
   printf("nhap n =");
   scanf("%d",&n);
//---------------------------

   for (i=0;i<=n;i++)
   {
       a[i][0]=1;
       a[i][i]=1;
    }

//-------------------------
    for (i=2;i<=n;i++)
      for (j=1;j<i;j++)
         a[i][j]=a[i-1][j-1]+a[i-1][j];

//---------------------------
  d=0;
    for (i=0;i<=n;i++)

        {
            for(j=0;j<=d;j++) printf("%d  ",a[i][j]);
            d++;
            printf("\n");

        }




}
