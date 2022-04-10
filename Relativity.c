#include<stdio.h>
int main()
{
    int t,i;
    short g,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%hd%hd",&g,&c);
        printf("%d\n",(c*c)/(2*g));
    }
    return 0;
}
