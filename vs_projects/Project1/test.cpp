#define _CRT_SECURE_NO_WARNINGS
#define ADJUST 7.31
#include<stdio.h>
#include<string.h>

int main()
{
	const double SCALE = 0.333;
	double shoe, foot;

	printf("Shoe size(men's)   foot length\n");
	shoe = 3.0;
	while (shoe < 18.5) {
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %15.2f inches\n", shoe, foot);
		shoe = shoe + 1.0;
	}
	printf("if the shoe fits ,wear it .\n");
	return 0;
}