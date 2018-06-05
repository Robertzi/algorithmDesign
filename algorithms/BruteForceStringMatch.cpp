#include "stdafx.h"

int BruteForceStringMatch(char *str, char *k) {
	int n = strlen(str), m = strlen(k);
	for (int i = 0; i < n - m; i++)
	{
		int j = 0;
		while (j < m && str[i + j] == k[j])
		{
			j++;
			if (j == m)return i;
		}
	}
	return -1;
}