// Write a recursive function to print first N even natural numbers

#include <stdio.h>
void print_even_num(int n);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    print_even_num(n);
    return 0;
}
void print_even_num(int n)
{
    if (n > 0)
    {
        print_even_num(n - 1);
        printf("%d ", 2 * n);
    }
}