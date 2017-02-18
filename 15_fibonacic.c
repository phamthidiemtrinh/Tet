#include <stdio.h>
int fi(int n);
void main ()
{
    int a[100],i,n,j;
    scanf("%d",&n);
   a[0] =1;
   a[1]=1;
   for (i=2;i<n;i++)
      a[i]=a[i-1]+a[i-2];
    printf("%d   \n",a[n]);
    printf("%d \n",fi(n));

}
int fi(int n)
{ if (n==1 || n==2) return 1;
else return (fi(n-1)+fi(n-2));
}
