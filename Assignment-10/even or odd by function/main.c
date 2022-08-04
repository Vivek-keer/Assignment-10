#include <stdio.h>
#include <stdlib.h>
check(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    switch(check(n))
    {
        case 0: printf("Odd number"); break;
        case 1: printf("Even number");
    }
    return 0;
}
check(int x)
{
    if(x%2) return 0;
    else return 1;
}
