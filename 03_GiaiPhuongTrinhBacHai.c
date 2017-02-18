#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c;
    float delta,x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    if (a==0)
    {
        if (b==0)
            { if (c==0) printf("phuong trinh vo so nghiem ");
                    else printf("phuong trinh vo  nghiem");
            }
        else printf(" phuong trinh co nghiem : %f",-c/b);
    }
    else
    {
        delta=b*b-4*a*c;
        if (delta ==0 ) printf ("phuong trinh co nghiem kep:  %f",(-b)/(2*a));
        else if (delta>0)
        {
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf ("nghiem x1=%f \n",x1);
            printf("nghiem x2=%f \n",x2);
        }
        else
        {
            x1=-b/(2*a);
            x2=sqrt(-delta)/(2*a);
            printf(" nghiem X1= %f + %0.2fi\n",x1,x2);
            printf("nghiem X2= %f-%0.2fi\n",x1,x2);
        }
    }
}
