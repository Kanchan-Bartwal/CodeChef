#include<stdio.h>
int main()
{
    short i,t,n;
    scanf("%hd",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%hd",&n);
        if(n==2010||n==2015||n==2016||n==2017||n==2019)
        printf("HOSTED\n");
        else
        printf("NOT HOSTED\n");
    }
    return 0;
}
