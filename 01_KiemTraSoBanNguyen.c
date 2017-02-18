# include <stdio.h>
void main()
{
    float n;
    scanf("%f",&n);
    if (n- (int)n  == 0.5) printf("%f la so ban nguyen",n);
    else printf ("%f khong la so ban nguyen",n);
}
