// Write a recursive function to print first N odd natural numbers

#include <stdio.h>
void print_odd_num(int n);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    print_odd_num(n);
    return 0;
}

void print_odd_num(int n)
{
    if (n > 0)
    {
        print_odd_num(n - 1);
        printf("%d ", n * 2 - 1);
    }
}