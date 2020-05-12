#include<stdio.h>
int main(int argc, char *a[])
{
	int n,i,result=0,flag=1;
	scanf("%d",&n);
	int quantity[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&quantity[i]);
	}
	int ingredients[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ingredients[i]);
	}
	while(flag!=0)
	{
		for(i=0;i<n;i++)
		{
			if(ingredients[i]<quantity[i])
			{
				flag=0;
				break;
			}
			ingredients[i]=ingredients[i]-quantity[i];
			result=result+1;
			if(i==n)
			{
				i=0;
			}
		}
	}
	printf("%d",result/n);	

	//Write code here
}

