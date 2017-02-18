#include <stdio.h>
void main ()
{
    int a[100],i,j,n,*p,max,min;
    p=a;
    printf("nhap n\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
         scanf ("%d",(p+i));
    max=a[0];min=a[0];
     for (i=0;i<n;i++){
     if (*(p+i)>max) max=*(p+i);
    if (*(p+i)<min) min=*(p+i);

     }
     printf("Max= %d   ",max);
     printf("min= %d   ",min);


}

