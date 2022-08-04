#include <stdio.h>
#include <stdlib.h>
int checkd(int,int);
int main()
{
    int n,digit;
    printf("Enter the number: "); scanf("%d",&n);
    printf("\nEnter the digit: "); scanf("%d",&digit);
    switch(checkd(n,digit))
    {
        case 1: printf("\n%d digit exist in this number",digit); break;
        case 0: printf("\n%d digit does not exist ",digit);
    }

    return 0;
}
int checkd(int x,int d)
{
    if(x==0) return 0;
    int e;
    e=x%10;
    if(e==d) return 1;
    checkd(x/10,d);
}
