#include <stdio.h>
int gt(int n);
void main()
{
   int n,k;
   scanf("%d%d",&n,&k);
   printf("%dA%d=%d",n,k,(int)gt(n)/gt(n-k));

}
int gt(int n)
   {

        if (n==1) return(1);
        else return ( gt(n-1)*n);
   }


