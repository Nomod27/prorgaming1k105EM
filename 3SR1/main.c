#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int length = 10;
    int ar[length];
    srand(time(NULL));
    for(int i = 0; i < length; ++i)
    {
        ar[i] = rand() % 15;
    }
    for(int i = 0; i < length; ++i)
    {
        printf("%d ", ar[i]);
    }
    for(int i = 0; i < length; ++i)
    {
        ar[i] = sumDel(ar[i]);
    }
    printf("\n\n");
    for(int i = 0; i < length; ++i)
    {
        printf("%d ", ar[i]);
    }
}

int sumDel(int num)
{
    int sum = 0;
    for(int i = num; i > 0; --i)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
