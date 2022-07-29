// Write a recursive function to print of first N natural numbers squares

#include <stdio.h>
void print_squares(int);

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    print_squares(n);
    return 0;
}
void print_squares(int n)
{
    if (n > 0)
    {
        print_squares(n - 1);
        printf("%d ", n * n);
    }
}