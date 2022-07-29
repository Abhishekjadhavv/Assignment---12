// Write a recursive function to print first N natural numbers

#include <stdio.h>
void print_number(int n);
int main()
{
    int n;

    printf("Enter a number");
    scanf("%d", &n);
    print_number(n);
    return 0;
}

void print_number(int n)
{
    if (n > 0)
    {
        print_number(n - 1);
        printf("%d ", n);
    }
}