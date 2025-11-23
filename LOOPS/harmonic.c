#include <stdio.h>
int main()
{
    float ans = 0;
    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        ans = ans + (float)1 / i;
    }
    printf("%f\n", ans);
    return 0;
}