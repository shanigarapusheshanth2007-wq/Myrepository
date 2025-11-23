#include <stdio.h>

void greet()
{
    char name[100];              // Reserve space for 99 chars + null terminator
    printf("Enter your name: "); // Good practice to prompt
    scanf("%99s", name);         // 99 prevents buffer overflow
    printf("Hello %s\n", name);
}

int main()
{
    greet();
    return 0;
}