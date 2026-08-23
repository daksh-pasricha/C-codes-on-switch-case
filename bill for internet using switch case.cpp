#include<stdio.h>
int main()
{
	int calls;
	double calc;
	printf("enter the amount of call u made=");
	scanf("%d",&calls);
	switch(calls)
	{
	
	case 0 ... 100:
		calc= 200;
		printf("the amount charged will be rupees=%.2f",calc);
		break;
	case 101 ... 150:
		calc= 200+ (calls-100)+0.6;
		printf("the amount charged will be rupees=%.2f",calc);
		break;
	case 151 ... 200:
		calc= 200+ ((50)*0.6)+ ((calls-150)*0.5);
		printf("the amount charged will be rupees=%.2f",calc);
		break;
	default:
		calc= 200 + ((50)*0.6)+ ((100)*0.5)+ ((calls-200)*0.4);
		printf("the amount charged will be rupees=%.2f",calc);
		break;
}
return 0;
}
