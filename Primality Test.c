#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int count=0;
        for(int j=1;j<=n;j++)
        {
            if(n%j==0)
            count=count+1;
        }
        if(count==2)
        printf("yes\n");
        else
        printf("no\n");
    }
    return 0;
}
