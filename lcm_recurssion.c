#include <stdio.h>
 
 int lcm(int a, int b)
{ 
    static int common = 1;
 
    if (common % a == 0 && common % b == 0)
    {
        return common;
    }
    common++;
    lcm(a, b);
    return common;
}
 
int main()
{
    int n1, n2, result;
 
    printf("Input first number: ");
    scanf("%d", &n1);
    printf("Input second number: ");
    scanf("%d", &n2);
	result = lcm(n1, n2);
    printf("The LCM of %d and %d = %d\n", n1, n2, result);
    return 0;
}
 
