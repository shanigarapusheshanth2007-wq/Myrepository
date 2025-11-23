#include <stdio.h>
int countvowes(char s[])
{
    int i = 0;
    while (s[i] == '\0')
    {
        ++i;
    }
    int n = i / sizeof(s[0]);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        char a, e, i, o, u;
        if (s[i] == (a || e || i || o || u))
        {
            ++count;
        }
    }
    return count;
}
int main()
{

    char a[] = "sheshi";
    int k = countvowes(a);
    printf("%d", k);
    return 0;
}
