#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i;
	printf("\n enter a string:");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&& s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	}
	printf("\n string in lower case=%s\n",s);

		return 0;
}
