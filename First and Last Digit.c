#include<stdio.h>
int main()
{
    int t,n,count=0,sum,y;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        while(n>0)
        {
            y=n%10;
            count=count+1;
            if(count==1)
            sum=y;
            n=n/10;
        }
        sum=sum+y;
        printf("%d\n",sum);
        count=0;
        sum=0;
    }
    return 0;
}
