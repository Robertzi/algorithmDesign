#include "stdafx.h"

int BinarySearch(int *arr,int number, int key) {
	int l = 0, r = number - 1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (arr[m] == key) return m;
		else if (key < arr[m]) r = m - 1;
		else l = m + 1;
	}
	return -1;
}