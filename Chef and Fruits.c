#include<stdio.h>
int main()
{
    short t,n,m,k;
    scanf("%hd",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%hd%hd%hd",&n,&m,&k);
        short min=(n<m)?n:m;
        short max=(n>m)?n:m;
        if(max-min==0)
        printf("0\n");
        else
        {
            if(k>=(max-min))
            printf("0\n");
            else
            printf("%hd\n",(max-min)-k);
        }
    }
    return 0;
}
