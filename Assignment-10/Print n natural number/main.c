#include <stdio.h>
#include <stdlib.h>
void PrintN(int);
int main()
{
     int n;
     printf("Enter the number: ");
     scanf("%d",&n);
     PrintN(n);
     printf("\n");
}
void PrintN(int x)
{
   if(x>0)
   {
       PrintN(x-1);
    printf(" %d ",x);
   }
}
