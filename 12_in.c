#include <stdio.h>
void main ()
{
    int a[100],i,j,n,*p,max,min;
    p=a;
    printf("nhap n\n");
    scanf("%d",&n);
    for (i=1;i<=n*n;i++)
         *(p+i)=i;;
     for (i=1;i<=n*n;i++){
            printf("%d ",*(p+i));
     if  (i%n==0) printf("\n");
     }



}

