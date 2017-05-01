#include<stdio.h>
#define LOWER 0
#define	UPPER 300
#define STEP 20
double fahr2celsius(int fahr);
int main()
{
	int fahr;
	float celsius;
	printf("fahr to celsius\n");
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
	{
		printf("%3d ^%6f\n", fahr, celsius=fahr2celsius(fahr));
	}
}
double fahr2celsius(int fahr)
{
	double ret;
	ret = 5.0 * (fahr-32) / 9;
	return ret;
}
