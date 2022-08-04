 #include<stdio.h>
int fact(int);

int main()
{
   int x,r;
   printf("Enter the n number: ");
   scanf("%d",&x);
    printf("Factorial is %d",fact(x));

}



int fact(int n)
{
   if(n==1||n==0) return 1;
     return n*fact(n-1);
}
