#include <stdio.h>
int main()
{
	int a,b,op;
	printf("enter your operator=");
	scanf("%c",&op);
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	switch(op)
	{
		case '+': printf("the sum is=%d",a+b); break;
		case '-': printf("the diffrence is=%d",a-b); break;
		case '/': printf("the division is=%d",a/b); break;
		case '*': printf("the multiplication is=%d",a*b); break;
		case '%': printf("the remainder is=%d",a%b); break;
		default: printf("the input is inavlid");
	}
	return 0;
}
