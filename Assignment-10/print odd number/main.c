#include <stdio.h>
#include <stdlib.h>
void odd(int);
int main()
{
     int n;
     printf("Enter the number: ");
     scanf("%d",&n);
     odd(n);
     printf("\n");
}
void odd(int x)
{
   if(x>0)
   {
       odd(x-1);
    printf(" %d ",2*x-1);
   }
}
