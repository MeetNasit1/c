#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number:-");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d",i*i);
	}
	return 0;
}