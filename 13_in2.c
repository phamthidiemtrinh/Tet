#include <stdio.h>
void main ()
{
  int *p,i,j,d,n;
  scanf("%d",&n);
   p=(int*)malloc((n*n)*sizeof(int));
   d=1;
    for(j=0;j<n;j++)
    for(i=0;i<n;i++)
        *(p+(i*n)+j)=d++;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",*(p+(i*n)+j));
       printf("\n");
    }


}

