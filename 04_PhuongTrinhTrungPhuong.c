#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,x1,x2,delta;
    scanf("%f%f%f",&a,&b,&c);
     if (a==0)
   {
        if (b==0)
             {
                    if(c==0) printf ("phuong trinh vo so nghiem");
                    else printf("phuong trinh vo nghiem");
             }
          else
              {
                    if (c/b<0)
                        {

                            printf("phuong trinh co ngiem ao: \n");
                            printf("x1=%fi\n",sqrt(-c/b));
                            printf("x2=4=-%fi\n",sqrt(-c/b));
                        }
                    else if(c==0) printf (" phuong trinh co nghiem X=0");
                    else if (c/b>0)
                        {
                            printf("phuong trinh co ngiem:\n ");
                            printf("x=%f\n",sqrt(c/b));
                            printf("x=-%f\n",sqrt(c/b));
                        }
            }
   }
    else
    {
        delta=b*b-4*a*c;
        if (delta==0)
            {
                    x1=-b/(2*a);
                    if (x1==0) printf ("nghiem X=0\n");
                    else if (x1<0)
                        {
                            printf("phuong trinh co ngiem ao: ");
                            printf("x1=%fi\n",sqrt(-x1));
                            printf("x2=-%fi\n",sqrt(-x1));
                        }
                    else
                        {
                            printf("x1=%f\n",sqrt(x1));
                            printf("x2=-%fi\n",sqrt(x1)) ;
                        }

        }
        else if (delta>0)
        {
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            if (x1==0) printf("X=0\n");
                else if (x1<0)
                        {
                            printf("x=%fi\n",sqrt(-x1));
                            printf("x=-%fi\n",sqrt(-x1));
                        }
                else
                        {
                            printf("x=%f\n",sqrt(x1));
                            printf("x=-%f\n",sqrt(x1));

                        }

            if (x2==
                0) printf("X=0\n");
                else if (x2<0)
                        {
                            printf("x=%fi\n",sqrt(-x2));
                            printf("x=-%fi\n",sqrt(-x2));
                        }
                else
                        {
                            printf("x=%f\n",sqrt(x2));
                            printf("x=-%f\n",sqrt(x2));

                        }


        }
        else
        {
            x1=-b/(2*a);
            x2=sqrt(-delta)/(2*a);
            printf(" nghiem ao x*x= %f + %0.2fi\n",x1,x2);
            printf("nghiem ao x*x= %f-%0.2fi\n",x1,x2);
        }
    }
}
