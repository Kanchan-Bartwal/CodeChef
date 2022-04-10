#include<stdio.h>
int main()
{
    int n,i,max=0;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        if(n%i==0)
        max=i;
    }
    printf("%d",max);
    return 0;
}
