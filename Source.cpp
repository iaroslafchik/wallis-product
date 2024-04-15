#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(0, ".1251");
	printf("Введетие желаемую точность\nНапример: 0,000000001 (обязательно через запятую! не точку! максимум 15 символов после запятой!)\n> ");

	double t;

	scanf("%lf", &t);

	double sum, sumOld, i ,tt; 
	for (i = 3, sum = sumOld = 2;; i += 2){
		sum *= ((i - 1) / i) * ((i + 1) / i);
		tt = sum - sumOld;
		if (tt < 0) tt *= -1;
		//printf("\r%.15lf %.15lf %.15lf", 2 * sum, 2 * sumOld, 2 * tt);
		if (tt < t) break;
		sumOld = sum;
	}

	printf("\n%.15lf", 2 * sum);
}