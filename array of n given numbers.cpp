#include <stdio.h>
int main()
{
	int i,s,n,a[10];
	printf("enter the number");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("enter searching element");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("found");
			break;
		}
	}
	if(i==n)
	{
		printf("not found");
	}
	return 0;
}
