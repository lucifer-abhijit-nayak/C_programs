#include<stdio.h>

int ans=0;
int sum(int d)
{
    ans+=d;
    return ans;            
}

int main()
{
	int n,ans1=0;
	printf("Enter the number: \n");
	scanf("%d",&n);                //number is taken as input
	int y=n;
	while(n!=0)
	{
		y=n%10;
		ans1=sum(y);                 //function call
		n=n/10;
	}
	printf("The sum of digits is %d",ans1);        //output
	return 0;
}
