#include <stdio.h>
void main ()
{
    int thuTu,tren,duoi,trai,phai,n,i,j,a[220][220],pt;
    printf("nhap cap cua ma tran : \n");
    scanf("%d",&n);
    tren=0;
    duoi=n-1;
    phai=n-1;
    trai=0;
    pt=n*n;
    thuTu=0;
 //==================================
 for (i=0;i<n;i++)
      for (j=0;j<n;j++) a[i][j]=0;
 while (thuTu < pt)
 {
     //----------------------------------
     for (i=trai;i<=phai;i++)
     {
         thuTu++;
         a[tren][i]=thuTu;
     }
     tren++;
     //-----------------------------------
     for (i=tren;i<= duoi;i++)
     {
         thuTu++;
         a[i][phai]=thuTu;
     }
     phai--;
     //------------------------------------
     for (i=phai;i>=trai;i--)
     {
         thuTu++;
         a[duoi][i]=thuTu;

     }
     duoi--;
     //-------------------------------------
     for (i=duoi;i>=tren;i--)
     {
         thuTu++;
         a[i][trai]=thuTu;

     }
     trai++;
 }

//====================================
printf("----------------\n");
    for (i=0;i<(n);i++)
    {
        for (j=0;j<(n);j++)

            printf("%d ",a[i][j]);
        printf("\n");
    }
}

