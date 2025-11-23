#include <stdio.h>
int iselijible(int age)
{
    if (age >= 18)
        printf("eligible");
    else
        printf("not elijible");
    return 0;
}
int main()
{
    iselijible(17);

    return 0;
}