#include <stdio.h>
int sumofdigits()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int sum = 0;
    while (n > 0)
    {
        int j;
        j = n % 10;
        sum = sum + j;
        n = n / 10;
    }
    return sum;
}
int main()
{

    int sum = sumofdigits();
    printf("%d", sum);
    return 0;
}