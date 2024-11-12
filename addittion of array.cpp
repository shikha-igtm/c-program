#include <stdio.h>
int main()
{
	int r,c,a[10][10],i,j,b[10][10],t[10][10];
	printf("\nenter row limit");
	scanf("%d",&r);
	printf("\nenetr coloum limit");
	scanf("%d",&c);
	printf("\n enetr the values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	    {
		scanf("%d",&a[i][j]);
	    }
    }
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		t[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("adittion values\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}
