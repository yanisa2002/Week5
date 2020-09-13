#include<stdio.h>

int main(){
	int num1, num2, start;
	printf("Enter first number : ");
	scanf_s("%d", &num1);
	printf("Enter second number : ");
	scanf_s("%d", &num2);

	if (num1 < num2) start = num1;
	else start = num2;

	while (((num1 % start) != 0) || ((num2 % start) != 0))
	{
		start = start - 1;
	}
	printf("Greatest common divisor = %d", start);

}