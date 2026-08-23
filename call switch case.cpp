#include <stdio.h>
int main()
{
	int calls,charge;
	printf("enter the amount of calls u want to make=");
	scanf("%d",&calls);
	switch(calls)
	{
		case 1 ... 150:
			printf("the charge per cal is 0 rupees."); break;
		case 151 ... 250:
			printf("the charge per call is  0.9 rupees."); break;
		case 251 ... 400:
			printf("the charge per call is 1.2 rupees."); break;
		default:
			printf("the charge per call is 1.5 rupees."); break;
	}
	return 0;
	
}
