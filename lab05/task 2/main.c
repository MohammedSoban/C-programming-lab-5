#include <stdio.h>
#include <stdlib.h>
void table(void);
int main()
{

table();
    return 0;
}
void table(void)
{
    int i,a,r;
    printf("enter a number:");
    scanf("%d",&a);
    for(i=0;i<=10;i++)
    {
        r=a*i;
        printf("%d*%d=%d\t\n\n",a,i,r);
    }
}
