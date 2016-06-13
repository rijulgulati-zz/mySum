/* Program to find sum of 2 digits */
#include<stdio.h>

void sum(int *, int *, int *);

int main(void)
{
	int a, b, result;
	printf("Enter digits to be added : ");
	scanf("%d %d", &a, &b);
	sum(&a, &b, &result);
	
	return 0;
}

void sum(int *a, int *b, int *res)
{
	*res = *a + *b;
	printf("\nSum = %d", *res);
}
