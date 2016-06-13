/* Program to find sum of 3 digits */

#include<stdio.h>

void sum(int*, int*, int*, int*);

int main(void)
{
	int a, b, c, result;
	printf("Enter any 3 digits to be added : ");
	scanf("%d %d %d", &a, &b, &c);
	sum(&a, &b, &c, &result);
	
	return 0;
}

void sum(int *a, int *b, int *c, int *res)
{
	*res = *a + *b + *c;
	printf("\nSum = %d", *res);
}
