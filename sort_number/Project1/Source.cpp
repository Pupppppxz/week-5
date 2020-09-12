#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int mySortNumber(const void * a, const void * b)
{
	return (*(int*)a > *(int*)b) ? -1 : 1;
}
int main()
{
	int number[6];
	int i;
	for (i = 0; i < 6; i++) 
	{
		printf("Enter the positive integer [%d] : ",i+1);
		scanf("%d", &number[i]);
	}
	int n = sizeof(number) / sizeof(number[0]);
	qsort(number, n, sizeof(int), mySortNumber);
	for (i = 0; i < 6; i++)
	{
		printf("%d\t", number[i]);
	}
	return 0;
}