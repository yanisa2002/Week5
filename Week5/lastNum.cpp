#include<stdio.h>

int main() {
	int i, j, sum = 0;
	printf("Enter number : ");
	scanf_s("%d", &i);

	while (i > 9) {
		sum = 0;
		while (i > 0) {
			j = i % 10;
			i = i / 10;
			sum = sum + j;
		}

		i = sum;
	}

	printf("%d", sum);
	return 0;

}