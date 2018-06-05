#include "stdafx.h"

void InsertionSort(int *arr, int length) {
	for (int i = 0; i < length; i++)
	{
		int v = arr[i], j = i - 1;
		while (j >= 0 && arr[j] > v)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = v;
	}
}