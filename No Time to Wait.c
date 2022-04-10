#include<stdio.h>
int main()
{
    short n,h,x,i,t,y=0;
    scanf("%hd%hd%hd",&n,&h,&x);
    for(i=1;i<=n;i++)
    {
        scanf("%hd",&t);
        if((x+t)>=h)
        y=y+1;
    }
    if(y>0)
    printf("YES");
    else
    printf("NO");
    return 0;
}
