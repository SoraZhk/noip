#include<stdio.h> 
int main()
{
	int n,m,x,sum;
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&n);
		sum=0;
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&x);
			sum+=x;
		}
		printf("%d\n",sum);
	}
}
