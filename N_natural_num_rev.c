// Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>
void print_num_rev(int n);
int main(){

    int n;
    printf("Enter a number");
    scanf("%d",&n);
    print_num_rev(n);
    return 0;
}

void print_num_rev(int n)
{
  if(n>0){
    printf("%d ",n);
    print_num_rev(n-1);
  }
}