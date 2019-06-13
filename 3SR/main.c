#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    short my_i = 0; short my_j = 0;
    const int length = 6;
    int res[3][3];
    int a[length][length];
    int sum;
    int maxSum = 0;
    srand(time(NULL));
    for(int i = 0; i < length; ++i)
    {
        for(int j = 0; j < length; ++j)
        {
            a[i][j] = rand() % 10;
            //a[i][j] = i+j;
        }
    }
    //CHECKING FOR MAX SUM 3x3
    for(int i = 0; i < length-2; ++i)
    {
        for(int j = 0; j < length-2; ++j)
        {
            sum = a[i][j] + a[i][j+2] + a[i+1][j+1] + a[i+2][j+2] + a[i+2][j];
            if(sum > maxSum)
            {
                maxSum = sum;
                my_i = i;
                my_j = j;
            }
        }
    }
    //COPYING MAX SUM 3x3
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            res[i][j] = a[my_i + i][my_j + j];
        }
    }
    //PRINT MAX SUM 3x3
    printf("%d \n", maxSum);
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
