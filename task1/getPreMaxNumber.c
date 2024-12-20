#include "getPreMaxNumber.h"


/// Возвращает 2 по величине (сверху) максимальное число
int getPreMaxNumber(int specialDigit, size_t* count) {
	int number;
	int maxNumber = specialDigit;
	int preMaxNumber = specialDigit;


	if (count != NULL) *count = 0;

	scanf_s("%d", &number);

	while (number != specialDigit) {
		if (count != NULL) *count += 1;

		if (maxNumber == specialDigit) {
			maxNumber = number;
		}
		else if (number > maxNumber) {
			int t = maxNumber;
			maxNumber = number;
			preMaxNumber = t;
		}
		else if (maxNumber > number && (number > preMaxNumber || preMaxNumber == specialDigit)) {
			preMaxNumber = number;
		}

		scanf_s("%d", &number);
	}

	return preMaxNumber == specialDigit ? specialDigit : preMaxNumber;

}