#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    
    int d,l,r;
    for(int i=1; i<=t; i++)
    {
        scanf("%d%d%d", &d, &l, &r);
        
        if(d>=l && d<=r)
           printf("Take second dose now\n");
        else if(d>r)
           printf("Too Late\n");
        else
           printf("Too Early\n");
    }
    return 0;
}
