#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a = 16.01;
    double b = 2.19;
    double x = -8.23;

    double result ;
    result = (sinh(a*x))/(b-x)*exp(2)-(pow(b-x,1.0/5));

    printf("%d",result);

    return 0;
}
