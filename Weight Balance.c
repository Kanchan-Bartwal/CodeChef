#include <stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    short w1,w2,x1,x2,m;
    for(i=1;i<=t;i++)
    {
        scanf("%hd%hd%hd%hd%hd",&w1,&w2,&x1,&x2,&m);
        if(((x1*m)<=(w2-w1))&&((x2*m)>=(w2-w1)))
        printf("1\n");
        else
        printf("0\n");
    }
    return 0;
}
