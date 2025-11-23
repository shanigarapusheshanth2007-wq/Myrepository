#include <stdio.h>
float fare(float c)
{

    int f = (9 * c / 5) + 32;
    return f;
}

int main()
{
    float n;
    printf("enter the value in celsius");
    scanf("%f", &n);
    float ans = fare(n);
    printf("%f", ans);
    return 0;
}