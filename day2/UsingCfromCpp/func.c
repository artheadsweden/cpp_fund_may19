#include <stdio.h>

int x;

void f(int i)
{
	x = 1;
	printf("The intger in f() is %d\n", i);
}

int g(double d)
{
	x = 2;
	printf("The double in g() is %f\n", d);
	return d;
}

double h()
{
	x = 3;
	double d = 3.45;
	printf("The double in h() is %f\n", d);
	return d;
}