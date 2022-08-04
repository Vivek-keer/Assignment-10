 #include<stdio.h>
int fact(int);
int arr(int,int);
int main()
{
   int x,r;
   printf("Enter the n number: ");
   scanf("%d",&x);
   printf("Enter the r number: ");
   scanf("%d",&r);
   printf("Number of arrangements is %d",arr(x,r));

}
int arr(int n,int r)
{
  int c;
  c= fact(n)/(fact(n-r));
     return c;

}

int fact(int n)
{
   if(n==1||n==0) return 1;
     return n*fact(n-1);
}

