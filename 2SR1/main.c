#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double up = 6.0;
    double low = -6.0;
    double step = 0.3;
    double y = 0.0;
    double x = 0.0;
    printf("X:\t");
    for (x = low; x < up + 0.1; x += step)
    {
        printf("%.2f\t", x);
    }
    printf("\n\nY:\t");
    for (x = low; x < up + 0.1; x += step)
    {
        double y = (x<=0) ? (log(x+sqrt(x*x+1))) : ((x<0&&x<5) ? sin(x+2/(x-1)) : -x+2);
        printf("%.2f\t", y);
    }
    printf("\n*******PART 2***********\n");
    double x_1;
    double y_1;
    float step_x = 1;
    float low_x = 0.1;
    float upp_x = 4.0;
    float step_y = 0.5;
    float low_y = 0.0;
    float upp_y = 3.0;
    printf("Y|X\t");
    for (x_1 = low_x; x_1 < upp_x + 0.1; x_1 += step_x)
    {
        char sign = x_1 + step_x <= upp_x ? '\t' : '\n';
        printf("%.2f%c", x_1,sign);
    }
    for (y_1 = low_y; y_1 < upp_y + 0.1; y_1 += step_y)
    {
        printf("%.2f\t", y_1);
        for (x_1 = low_x; x_1 < upp_x + 0.1; x_1 += step_x)
        {
            char sign = x_1 + step_x <= upp_x ? '\t' : '\n';
            double z = log(x_1+y_1)/exp(x_1+y_1);
            printf("%.4f%c", z, sign);
        }
    }
    return 0;
}
