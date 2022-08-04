 #include<stdio.h>
float Area(float);
int main()
{
   int x; float y;
   printf("Enter the radius: ");
   scanf("%d",&x);
   y=Area(x);
   printf("Area is %f",y);
}

float Area(float r)
{
  return 3.142*r*r;
}
