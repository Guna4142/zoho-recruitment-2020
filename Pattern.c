#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int p=n;
		for(j=1;j<=n;j++)
		{
			if(i==1)
			printf("%d ",n);
			else if(j<i)
			{
				printf("%d ",p);
				p--;
			}
			else
			printf("%d ",p);
		}
		printf("\n");
	}
	return 0;
}
