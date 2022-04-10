#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        int largest=(a>b)?((a>c)?a:c):((b>c)?b:c);
        int smallest=(a<b)?((a<c)?a:c):(b<c)?b:c;
        printf("%d\n",(a+b+c)-(largest+smallest));
    }
    return 0;
}
