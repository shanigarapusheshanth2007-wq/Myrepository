#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        int k = 1;
        for (int j = 2; j <= i ; j++)
        {
            if (i % j == 0)
            {
                k = 0;
            }
        }
        if (k == 1)
        {
            printf("%d", i);
        }
    }
    return 0;
}