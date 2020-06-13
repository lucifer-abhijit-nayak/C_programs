#include<stdio.h>
 int main()
 {
 	int a,b;
 	printf("Enter a: ");
	scanf("%d",&a);              //input for a
   	printf("Enter b: ");
	scanf("%d",&b);              //input for b
 	a=a+2*b;
 	b=a-2*b;            //value of b becomes a
 	a=(a-b)/2;          //value of a becomes b
 	printf("value of a: %d\n",a);
 	printf("value of b: %d\n",b);   //output
 }
