// Function questions
// https://www.w3resource.com/c-programming-exercises/function/index.php


q2
//Squaring using functions.

#include <stdio.h>
int square(int n)
{
      int a;
      a=n*n;
      return a;
}

int main() {
    int n,a;
    printf("Enter number: ");
    scanf("%d",&n);
    a=square(n);
    printf("square of %d is %d",n,a);
    
    
    return 0;
}

q3
//Sqwapping two numbers.

#include <stdio.h>
void swap(int a, int b)
{
    int c;
    printf("before swapping: a=%d, b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping: a=%d, b=%d",a,b); 
}

int main() {
    int a,b;
    printf("Enter number a: ");
    scanf("%d",&a);
    printf("Enter number b: ");
    scanf("%d",&b);
    
    swap(a,b);
    
    
    return 0;
}

q4
//Checking even or odd.

#include <stdio.h>
void e_o(int a)
{
    if(a%2==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}

int main() {
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    e_o(a);
    return 0;
}

q5
//Sum of series: 1!/1+2!/2+3!/3+4!/4+5!/5

#include <stdio.h>
int fact(int i)
{
    int j,fact=1;
    for(j=1;j<=i;j++)
    {
        fact=fact*j;
    }
    return fact;
}

int main() {
    int i,sum=0;
    for(i=1;i<=5;i++)
    {
        sum=sum+fact(i)/i;
    }
    
    printf("Sum of series is %d",sum);
    return 0;
}

q6
