#include <stdio.h>
bhenchod
madarchod
int main()
{
	int num;
	printf("enter the number: ");
	scanf("%d",&num);
	if(num%5==0 && num%11==0)
	{
		printf("The number is divisible by 5 and 11");
	}
	else
	{
		printf("The number is not divisible by 5 and 11");
	}
	
	return 0;
}
