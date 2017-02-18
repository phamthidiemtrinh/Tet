
#include <stdio.h>
#include <math.h>
void main ()
{
    int n,i,dem;
    printf("nhap n \n");
    scanf("%d",&n);
    if (n<2) printf("%d khong la so nguyen to",n);
    else if (n==2) printf ("%d là so nguyen to",n);
    else
    {
        for (i=2;i<=(int)sqrt(n);i++)
        {

                 if (n%i==0)
                {
                    printf("khong phai o nguyen to");
                    break;
                }
        }
        if (n % ((int)sqrt(n)+1)!=0) printf("la so nguyen to");
      }
}
