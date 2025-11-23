#include <stdio.h>

// Correct factorial function
long long fact(int n) // better name: n instead of fact
{
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    double e = 1.0; // Start with 1 (which is 1/0! = 1/1)

    for (int i = 1; i <= n; i++)
    {
        double term = 1.0 / fact(i); // Use 1.0 for floating-point division
        e = e + term;
        printf("After %d terms: %.10f\n", i, e);
    }

    printf("\nFinal value of e ≈ %.10f\n", e);
    return 0;
}
