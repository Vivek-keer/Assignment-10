 #include<stdio.h>
int Area(int);
int main()
{
   int y,p,r,t;
   printf("Enter the principle,rate and time period: ");
   scanf("%d%d%d",&p,&r,&t);
   y=interst(p,r,t);
   printf("Interest is %d",y);
}

int interst(int p,int r,int t)
{
  return p*r*t;
}
