#include <stdio.h>
#include <stdlib.h>
void avg(void);
int main()
{
    avg();

    return 0;
}
void avg(void)
{
    int a,b,c,d,e,sum,avg;
    printf("enter 5 number");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    avg=sum/5;
    printf("sum: %d\n",sum);
    printf("avg: %d",avg);
}
