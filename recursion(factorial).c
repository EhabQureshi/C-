// Factorial using recursion

#include <stdio.h>
long int rec_fact(long int n)
{
      if(n==1)
      {
          return 1;
      }
      else
      {
          return (n*rec_fact(n-1));
      }
}

int main() {
    long int n,a;
    printf("enter a number: ");
    scanf("%ld",&n);
    a=rec_fact(n);
    printf("factorial of %ld is %ld",n,a);
    return 0;
}
