// Write a recursive function to print reverse of a given number

#include <stdio.h>
int reverse_num(int n);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    printf("%d", reverse_num(n));
    return 0;
}
int reverse_num(int n)
{
    static int k = 0;
    if (n > 0)
    {
        k = k * 10 + (n % 10);
        reverse_num(n / 10);
    }
    return k;
}