#include<stdio.h>
int main()
{
	int number;
	printf("enter a number:");
	scanf("%d",&number);
	if(number % 2==0)
	{
		printf("%d is an even num.\n",number);
	}
	else{
		printf("%d is an odd number.\n",number);
	}
	return 0;
}
