#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n<10)
        printf("Thanks for helping Chef!\n");
        else
        printf("-1\n");
    }
    return 0;
}
