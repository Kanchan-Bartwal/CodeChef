#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int sum=0;
        while(n>0)
        {
            int y=n%10;
            sum=sum+y;
            n=n/10;
        }
        printf("%d\n",sum);
    }
    return 0;
}
