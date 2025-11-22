#include <stdio.h>
#include <math.h>
int main()
{

    int floors = 10;
    int height = 3;
    int u = 0;
    float t;
    float a = 9.8;
    for (int i = 0; i < 10; i++)
    {
        int s = floors * height - i * height;
        printf("time taken for %dfloor\n", i);
        printf("%ftime \n", sqrt(2 * s / a));
    }
    return 0;
}