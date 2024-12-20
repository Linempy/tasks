#pragma once

#include <stdio.h>

/// <summary>
/// Возвращает 2 по величине (сверху) максимальное число
/// </summary>
/// <param name="specialDigit"> - стоп число</param>
/// <param name="count"> - указателя для подсчета кол-ва чисел</param>
/// <returns>целое число<returns>
int getPreMaxNumber(int specialDigit, size_t * count);
