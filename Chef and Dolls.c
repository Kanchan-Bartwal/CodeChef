#include<stdio.h>
int main()
{
    short t,i;
    int n,j,type,left;
    scanf("%hd",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        scanf("%d",&type);
        left=type;
        for(j=1;j<=n-1;j++)
        {
            scanf("%d",&type);
            left=left^type;
        }
        printf("%d\n",left);
    }
    return 0;
}
