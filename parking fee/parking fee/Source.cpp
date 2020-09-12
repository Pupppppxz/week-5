#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float parking(float time, float price)
{
	float result;
	result = (time / 60) * price;
	return result;
}
int main()
{
	float time, price = 35;
	int num;
	printf("1 Hr = 35 Baht\nMore than 1 day charge extra 20 Baht per day \ntype your time(minute) : ");  
	scanf("%f", &time);
	num = time;
	if (time > 0) {
		if (time > 0 && time <= 1440) {
			printf("\nMust be paid = %.2f Baht", parking(time, price));
		}
		else if (time > 1440) {
			printf("\nMust be paid = %.2f Baht", parking(time, price) + ((num/1440)*20) );
		}
		else {
			printf("Error");
		}
	}
	return 0;
}