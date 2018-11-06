#include <stdio.h>
#include <stdlib.h>
void fact(void);
int main()
{
    fact();
    //return 0;
}
void fact(void)
{
    int i,a,f=1;
    printf("enter a number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    printf("fact= %d",f);
}
