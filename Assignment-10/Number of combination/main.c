#include<stdio.h>
int fact(long int);
int comb(int,int);
int main()
{
   int x,r;
   printf("Enter the n number: ");
   scanf("%d",&x);
   printf("Enter the r number: ");
   scanf("%d",&r);
   printf("Number of combination is %d",comb(x,r));

}
int comb(int n,int r)
{
  long int c;
  c= fact(n)/(fact(n-r)*fact(r));
     return c;

}

int fact(long int n)
{
   if(n==1||n==0) return 1;
     return n*fact(n-1);
}
