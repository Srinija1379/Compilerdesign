#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int len;
	printf("enter the text");
	scanf("%[^\n]s",a);
	len=strlen(a);
	if(a[0]=='/'&&a[1]=='/')
	{
		printf("single line comment");
	}
	else if(a[0]=='/'&&a[1]=='*' && a[len-1]=='/' && a[len-2]=='*')
	{
			printf("multiple line comment");
	}
	else
	{
		printf("not a comment line");
	}
	return 0;
}
