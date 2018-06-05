#include "stdafx.h"

void SelectSort(int *arr, int length) {
	for (int i = 0; i < length - 1; i++)
	{
		int min = i;
		for (int j = i+1; j < length; j++)
		{
			if (arr[min] > arr[j]) min = j;
		}
		if (min != i) Swap(&arr[min], &arr[i]);
	}
}