#include<stdio.h>
int main()
{
	char input[10];
	printf("enter the operator");
	gets(input);
	switch (input[0])
	{
	case '>':
		if(input[1]=='=')
			printf("greater thean equal");
		else
			printf("greater");
		break;
	case '<':
		if(input[1]=='=')
			printf("less thean equal");
		else
			printf("less");
		break;
	case '!':
		if(input[1]=='=')
			printf("not equal");
		else
			printf("bitwise not");
		break;
	case '&':
		if(input[1]=='&')
			printf("logical and");
		else
			printf("bitwise and");
		break;
	case '|':
		if(input[1]=='|')
			printf("logical or");
		else
			printf("bitwise or");
		break;
	case '+':
		printf("addition");
		break;
	case '-':
		printf("subtraction");
		break;
	case '*':
		printf("multiplication");
		break;
	case '/':
		printf("division");
		break;
	default:
		printf("not an operator");
	}
		return 0;		
}
