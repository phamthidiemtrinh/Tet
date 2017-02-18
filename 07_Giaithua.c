#include <stdio.h>
int gt(int n);
void main()
{
    int n,i,giaithua;
    giaithua=1;
    scanf("%d",&n);
    for (i=1;i<=n;i++) giaithua=giaithua*i;
    printf("vong lap %d!=%d\n",n,giaithua);
     printf("de quy %d!=%d",n,gt(n));
}
int gt(int n)
   {

        if (n==1) return(1);
        else return ( gt(n-1)*n);
   }
