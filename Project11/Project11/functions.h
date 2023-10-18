#pragma once
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
void z1() {
	int year;
	scanf_s("%d", &year);;
	if (year >= 1000 && year % 4 == 0)
		printf("z1: yes\n");
	else if (year % 400 == 0 && year < 1000)
		printf("z1: yes\n");
	else if (year % 4 == 0 && year < 100)
		printf("z1: yes\n");
	else
		printf("z1: no\n");
}

void z2() {
	int x = 1984;
	int year;
	printf("z2: Year (from 1984): ");
	scanf_s("%d", &year);

	int y = year - x;

	char* animals[] = { "крысы", "коровы", "тигра", "зайца", "дракона", "змеи", "лошади", "овцы", "обезьяны", "курицы", "собаки", "свиньи" };
	char* colors[] = { "зеленой", "красной", "желтой", "белой", "черной" };

	printf("Год %s %s\n", colors[y / 12], animals[y % 12]);
	return 0;
}

void z3() {
	int count = 0;

	for (int i = 1; i <= 999; i++) {
		int num = i;
		while (num > 0) {
			int n = num % 10;
			if (n == 7) {
				count++;
			}
			num /= 10; 
		}
	}

	printf("z3: Цифра 7 встречается %d раз\n", count);
	return 0;
}

void z4() {
	int count = 0;
	for (int i = 1; i <= 999; i++) {
		int num = i;
		while (num > 0) {
			int n = num % 10;
			if (n == 7) {
				count++;
				break;
			}
			num /= 10;
		}
		
	}
	printf("z4: %d чисел \n", count);
	return 0;
}

void z5() {
	int x = 1224;
	printf("z5: Число 1224\n");
	int num = x;
	while (x >= 10) {
		int sum = 0;
		while (num > 0) {
			sum += num % 10;
			num /= 10;
		}
		x = sum;
	}
	printf("z5: Сумма равна %d\n", x);
	

	return 0;
}

void z6() {
	printf("z6: Введите число : ");
	int num=0, n = 134;
	bool flag = false;
	scanf_s("%d", &num);
	for (int i = 0; i < 10; i++) {
		if (num > n) {
			printf("Too high!\n");
			printf("z6: Введите число : ");
			scanf_s("%d", &num);
		}
		else if (num < n) {
			printf("Too low!\n");
			printf("z6: Введите число : ");
			scanf_s("%d", &num);
		}
		else {
			printf("WIN\n");
			flag = true;
			break;

		}
	}
	if (flag == false)
		printf(":(\n");
	getchar();
	return 0;
}

void z7() {
	int n=0;
	printf("z7: Введите кол-во членов ряда: ");
	scanf_s("%d", &n);
	double pi = 0.0;
	for (int i=0; i < n; i++) {
		double sum = 1.0 / (2 * i + 1);
		if (i % 2 == 1)
			sum = -sum;
		pi += sum;


	}
	pi *= 4;
	printf("Pi = %f\n", pi);
	getchar();
	return 0;
}
