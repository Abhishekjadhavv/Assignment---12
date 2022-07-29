// Write a recursive function to print octal of a given decimal number
#include <stdio.h>
void decimal_octal(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    decimal_octal(n);
    return 0;
}

void decimal_octal(int n)
{
    if (n > 0)
    {
        decimal_octal(n / 8);
        printf("%d", n % 8);
    }
}