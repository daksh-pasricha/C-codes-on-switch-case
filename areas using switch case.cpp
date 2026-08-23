#include <stdio.h>
int main()
{
	int r,l,b,a,a1,a2,a3,choice;
	float area;
	printf("enter 1 for rectangle\nenter 2 for square\nenter 3 for circle");
	printf("\nenter choice=");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	 printf("enter the length=");
	 scanf("%d",&l);
	 printf("enter the breadh=");
	 scanf("%d",&b);
	 a1= l*b;
	 printf("the area of rectangle=%d",a1);
	 break;
	case 2:
		printf("enter the edge length=");
	 scanf("%d",&a);
	 a2= a*a;
	 printf("the area of square=%d",a2);
	 break;
	case 3:
		printf("enter the radius=");
	 scanf("%d",&r);
	 a3= 3.14*r*r;
	 printf("the area of circle=%d",a3);
	 break;
	default:printf("shape is not registered");
}
	return 0;
	
}
