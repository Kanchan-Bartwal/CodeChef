#include<stdio.h>
#include<limits.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int a[n];
        int min=INT_MAX;
        int index=-1;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(min>a[j])
            {
                min=a[j];
                index=j;
            }
        }
        int secmin=INT_MAX;
        for(int j=0;j<n;j++)
        {
            if(j!=index)
            if(secmin>a[j])
            secmin=a[j];
        }
        printf("%d\n",(min+secmin));
    }
    return 0;
}
