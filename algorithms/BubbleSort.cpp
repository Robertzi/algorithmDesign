#include "stdafx.h"

void BubbleSort(int *arr, int length) {
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (arr[j + 1] < arr[j]) Swap(&arr[j + 1], &arr[j]);
		}
	}
}