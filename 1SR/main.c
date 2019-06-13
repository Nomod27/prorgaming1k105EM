#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a = -11.2;
    double b = -12.93;
    double x = 2.29;
    printf("Print values\n");
    scanf("%lf %lf %lf", &a, &b, &x);
    double res1 = pow(x,1.6) - 1;
    double res2 = pow(sin(res1), 2);
    double res3 = (x-a)/(x+b);
    double res4 = fabs(cos(res3));
    double res_finale = res4*res2;
    printf("%f", res_finale);
    return 0;
}
