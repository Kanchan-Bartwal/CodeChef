#include<stdio.h>
int main()
{
    int t,n,count=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        while(n>0)
        {
            if(n>=100)
            {
                count=count+1;
                n=n-100;
            }
            else if(n>=50)
            {
                count=count+1;
                n=n-50;
            }
            else if(n>=10)
            {
                count=count+1;
                n=n-10;
            }
            else if(n>=5)
            {
                count=count+1;
                n=n-5;
            }
            else if(n>=2)
            {
                count=count+1;
                n=n-2;
            }
            else if(n>=1)
            {
                count=count+1;
                n=n-1;
            }
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}
