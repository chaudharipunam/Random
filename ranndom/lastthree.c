#include<stdio.h>
int main()
{
	int num,lastdigit;
	printf ("enter the num: ");
	scanf("%d",&num);
	lastdigit=num%10;
	if(lastdigit%3==0){
	printf("it is divisible by 3: ");
	} else {
	printf("it is not divisible by 3: ");
	}
	return 0;
}
