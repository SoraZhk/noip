#include<stdio.h> 
int main()
{
	int n,x,sum;
	while(scanf("%d",&n)&&n!=0)
	{
		sum=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&x);
			sum+=x;
		}
		printf("%d\n",sum);
	}
}
