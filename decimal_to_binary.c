// Write a recursive function to print binary of a given decimal number

#include <stdio.h>
void decimal_binary(int n);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    decimal_binary(n);
    return 0;
}

void decimal_binary(int n)
{
    if (n)
    {
        decimal_binary(n / 2);
        printf("%d", n % 2);
    }
}