 #include<stdio.h>

void prime(int );

int main()
{
   int x;
   printf("Enter the n number: ");
   scanf("%d",&x);
    prime(x);

}
void prime(int y)
{
    int n=2;
     while(y>1)
     {
        if(y%n==0)
           {
             printf("%d ",n); y=y/n;
           }
        else n++;

     }
}
/*
void factor(int p)
{
   if(p>1)
{
   if(p%2==0) {printf("2 "); factor(p/2); }
   else
{
   if(p%3==0) {printf("3 "); factor(p/3); }
  else
{
 if(p%5==0) {printf("5 "); factor(p/5); }
  else {
 if(p%7==0) {printf("7 "); factor(p/7); }
 else
 {
     prime(p);
 }
 }
}
}
}

}
*/
