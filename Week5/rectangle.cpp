#include<stdio.h>

int main() {
	double Width, Long, Area;
	scanf_s("%lf %lf", &Width, &Long);
	Area = Width * Long;
	if (Width >= 0 && Long >= 0) {
		printf("Area = %f x %f = %.3f ", Width, Long, Width * Long);
	}
	else printf("Error");

	return 0;
}