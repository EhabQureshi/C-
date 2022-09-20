#include <stdio.h>

int main() {
   int a,b,max;
   printf("enter 2 numbers\n");
   scanf("%d%d",&a,&b);
   max=(a>b)?a:b;
   printf("\nthe highest number is %d",max);
    return 0;
}
