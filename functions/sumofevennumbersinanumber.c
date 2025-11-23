/* Find sum of even digits in a number
sample output:
Enter a number: 24863
Sum of even digits = 20
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int sum = 0;
    while (n > 0)
    {
        int j = n % 10;
        if (j % 2 == 0)
        {
            sum = sum + j;
        }
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}