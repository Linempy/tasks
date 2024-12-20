
#include <stdio.h>
#include <locale.h>
#include "getPreMaxNumber.h"


int main() {
	setlocale(LC_ALL, "Russian");

	int specialDigit;
	size_t count = 0;

	printf("Введите стоп-число: ");
	scanf_s("%d", &specialDigit);
	printf("%Введите целые числа: \n");

	int result = getPreMaxNumber(specialDigit, &count);

	printf("Второе максимальное по величине число (сверху): %d\n", result);

	if (count) printf("Количество чисел в последовательности: %d", count);

	return 0;
}