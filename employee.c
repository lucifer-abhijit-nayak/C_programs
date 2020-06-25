#include<stdio.h>

struct doc
{
	char name[50];
	int salary;
	long long int mobile;
	int age;
};


int main()
{
    struct doc A[21];
	int i;
	for(i=1;i<=20;i++)
	{
		scanf("%s",&A[i].name);
		scanf("%d",&A[i].age);	
		scanf("%lld",&A[i].mobile);
		scanf("%d",&A[i].salary);
		
	}
	printf("NAME\t\t");
	printf("AGE\t");
	printf("MOBILE NO\t\t");
	printf("SALARY\n");
	for(i=1;i<=20;i++)
	{
	    printf("%s\t\t",A[i].name);
		printf("%d\t",A[i].age);
		printf("%lld\t\t",A[i].mobile);	
		printf("%d\n",A[i].age);
		
	}	
}
