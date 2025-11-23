#include <stdio.h>
int modulus(int x)
{
    if (x < 0)
    {
        x = x * (-1);
    }
    return x;//here initially i have put return o and the outpiut is wrong and when i havve used return x i got the correct answer
}
int main()
{

    int k = modulus(-5);
    printf("%d", k);
    return 0;
}