#include<stdio.h>

	int getsum(int num)
{
	if(num==0)
	{
		return  0;
	}
	int digit = num % 10; 

	return digit + getsum0(num / 10);
}
		int main()
	int num =4545;
	printf("sum :%d",getsum(num));
	return 0;
	}
