#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 1; i <= 2 * n - 1; i++)
    {

        for (int j = 1; j <= 2 * n - 1; j++)
        {
            D = abs(i - 5) + abs(j - 5);
            int number = n - D;

            number = 5 - D;

            printf("%d", number);
        }
        printf("\n");
    }
    return 0;
}