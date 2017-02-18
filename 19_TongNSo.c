#include <stdio.h>
float tong (int n);
void main()
{ int i,n;
  float s;
  scanf("%d",&n);

  s=0;
  for (i=1;i<=n;i++) s+=(float) 1/i;
  printf("%f\n",s);
  printf("%f\n",tong(n));

}
float tong(int n)
{
    if (n==1) return 1;
    else return( tong(n-1)+(float)1/n);
}
