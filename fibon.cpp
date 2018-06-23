/* 
* @file fibon.cpp 
* @author Касапен Е.В., гр. 515в
* @date 23 июня 2018 
* @brief Задание для летней практики 
* Расчет произвольного числа последовательности Фибоначчи
*/
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <stdio.h>
#include <locale.h>
/**
* Расчет произвольного числа последовательности Фибоначчи
* @param введеный номер числа
* @return требуемое число в последовательности
*/
int fibonacci(int f);

int main()
{
	setlocale(LC_ALL, "RUS");
	int c, fib;
lab1:
	for (;;) {
		printf("Введите порядковый номер числа в последовательности Фибоначчи:");
		scanf_s("%d", &fib);
		if (fib <= 0) {
			printf("Error!\n"); return 1;
		}
		if (fib>40)
			printf("Программа не способна обработать такие данные.\n");
		else break;
	}
	printf("%d число - %d \n", fib, fibonacci(fib));
	printf("Введите 1, если хотите продолжить, или 0 для выхода из программы: ");
	scanf_s("%d", &c);
	if (c == 1) goto lab1;
	if (c == 0)
		return 0;
	else printf("Error!\n");
}
int fibonacci(int f)
{
	if (f == 1 || f == 2)
		return 1;
	return fibonacci(f - 1) + fibonacci(f - 2);
}
