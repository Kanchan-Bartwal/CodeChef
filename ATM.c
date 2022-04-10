#include <stdio.h>

int main(void) 
{
	float y;
	int x;
	scanf("%d %f",&x,&y);
	if(y>=(x+0.50) && x%5==0 && x!=0)
	{
	    printf("%.2f",y-x-0.50);
	}
	else
	{
	    printf("%.2f",y);
	}
	return 0;
}
