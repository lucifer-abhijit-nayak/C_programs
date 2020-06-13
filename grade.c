#include<stdio.h>
 int main()
{
     int a=1;
	while(a)
	{
	    int m;
		label: printf("Enter the marks of the student:\n");
		scanf("%d",&m);   //input of marks
		if(m>=85 && m<=100)
		  printf("Grade A\n");
		else if(m>=70 && m<=84)
		  printf("Grade B\n");
		else if(m<=69 && m>=55)
		  printf("Grade C\n");
		else if(m>=40 && m<=54)
		  printf("Grade D\n");
		else if(m<40)
		  printf("Grade F\n");
		else                                   //for marks beyond 100 or below 0
		{
		  printf("The marks shud be between 0 and 100\n");
		  goto label;
	    }
	    printf("Want to enter another student's marks then press 1 or else 0\n");   //for another entry
	    scanf("%d",&a);
    } 	
}
