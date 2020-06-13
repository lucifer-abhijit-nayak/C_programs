#include<stdio.h>
int main()
{
	int n;
	printf("ENTER YOUR CHOICE: ");
	label:scanf("%d",&n);
	switch(n)
	{
		case 1:  printf("Food Item: Chicken Drumstick\n");
		         printf("Cost: 450\n");
		         break;
		case 2:  printf("Food Item: Chicken Popcorn\n");
		         printf("Cost: 150\n");
		         break;
		case 3:  printf("Food Item: Chicken Chopsey\n");
		         printf("Cost: 200\n");
		         break;
		case 4:  printf("Food Item: Chicken Biriyani\n");
		         printf("Cost: 150\n");
		         break;
		case 5:  printf("Food Item: Chicken Momo\n");
		         printf("Cost: 80\n");
		         break;
		default: printf("Choice should be betweeen 1 ans 5\n");
             goto label;
	}
}
