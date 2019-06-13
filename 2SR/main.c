#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FUN(x) cos(x);
int main()
{
    double res;
    int N = 7;
    double up = 2;
    double low = 1;
    double step = (up - low) / (N - 1);
    for (double x = low; x <= up; x += step)
    {
        res = 0;
        double a = 1;//When n = 0;
        for (int n = 0; n <= N; n++)
        {
            res += a;
            a *= -(pow(x,2)/((2*n+1)*(2*n+2)));
        }
        double y = FUN(x);
        printf("X = %.4f\n\tResult of Sum: %.4f\n",x, res);
        printf("\tResult of function: %.4f\n", y);
        double tolerance = fabs(y - res);
        printf("\tTolerance: %.4f\n", tolerance);
    }
    return 0;
}
