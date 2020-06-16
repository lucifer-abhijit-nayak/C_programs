#include<stdio.h>
int main()
{
	
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=2*i;j++)
		{
			if(j%2==1)
			   printf("%d",0);
			else printf("%d",1);
		}
		printf("\n");
	}
}
