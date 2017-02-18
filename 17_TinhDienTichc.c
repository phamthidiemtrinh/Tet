
#include <stdio.h>
#include <math.h>
void main ()
{
    int n;
    float a,b,c,s,p,pi,r;
    printf("nhap lua chon : \n");
    printf("1: tam giac\n");
    printf("2: hinh vuong\n");
    printf("3: hinh chu nhat\n");
    printf("4: hinh tron\n");
    scanf("%d",&n);
    switch (n)
    {


case 1:
    {
    printf("nhap đo dai 3 đinh tam giac \n");
    scanf("%f%f%f",&a,&b,&c);
    p = (a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("dien tich tam giac %f\n", s);
    break;
    }
case 2:
    {
    printf("nhap do dai canh hinh vuong : \n");
    scanf("%f%f",&a);
    s=a*a;
    printf("dien tich hinh vuong la: \n%f",s);
    break;
    }
case 3:
    {
    printf("nhap do dai hai canh hinh chu nhat  : \n");
    scanf("%f%f",&a,&b);
    printf("dien tich hinh chu nhat la: \n%f",a*b);
    break;
    }
case 4:
    {
    pi=3.1416;
    printf("nhap ban kinh duong tron\n");
    scanf("%f",&r);
    s=r*r*pi;
    printf("dien tich hinh tron: \n%f",s);
    break;
    }
    default : printf (" nhap sai ");
}
}


