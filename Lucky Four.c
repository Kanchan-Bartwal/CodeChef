#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int count=0;
        while(n>0)
        {
            int y=n%10;
            if(y==4)
            count=count+1;
            n=n/10;
        }
        printf("%d\n",count);
    }
    return 0;
}
