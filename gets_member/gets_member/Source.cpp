#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
	struct student {
		char name[50];
		int age;
	}student[5];
	for (int i = 0; i < 5; i++) {
		printf("Student %d (MatthayomSuksa)\n", i + 1);
		printf("Name : ");
		scanf("%s", &student[i].name);
		printf("Age : ");
		scanf("%d", &student[i].age);
	}
	for ( int j = 0; j < 5; j++) {
		if (student[j].age > 7 && student[j].age <= 19) {
			printf("%d %s %d\n",j+1, student[j].name, student[j].age);
		}
	}
	return 0;
}
