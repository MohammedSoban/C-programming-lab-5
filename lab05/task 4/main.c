#include <stdio.h>
#include <stdlib.h>
void odd(int,int);
int main()
{
    int a,b;
    printf("enter a starting number: ");
    scanf("%d",&a);
    printf("enter a ending number: ");
    scanf("%d",&b);
    odd(a,b);
    return 0;
}
void odd(x,y)
{
    int i,sum=0;
    for(i=x;i<=y;i++)
    {
    if(i%2!=0)
    sum=sum+i;
    }
    printf("sum of odd numbers is: %d",sum);
}
