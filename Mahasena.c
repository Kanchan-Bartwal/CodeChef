#include<stdio.h>
int main()
{
    int n,a,ecount=0,ocount=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        ecount =ecount+1;
        else
        ocount=ocount+1;
    }
    if(ecount>ocount)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
}
