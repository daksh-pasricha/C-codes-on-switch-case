#include <stdio.h>
int main()
{
	int num;
	printf("enter your number=");
	scanf("%d",&num);
	switch(num)
	{
		case 1: printf("the day is monday");break;
		case 2: printf("the day is tuesday");break;
		case 3: printf("the day is wednesday");break;
		case 4: printf("the day is thursdayday");break;
		case 5: printf("the day is friday");break;
		case 6: printf("the day is saturday");break;
		case 7: printf("the day is sunday");break;
		default: printf("invalid");
	}
	return 0;
}
