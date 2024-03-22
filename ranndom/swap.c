#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the no a:");
	scanf("%d",&a);
	printf("enter the no b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d \n",a);
	printf("%d",b);
	return 0;
}
	 
	
