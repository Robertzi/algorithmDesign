// TheDesignAndAnalysisOfAlgorithms.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int main()
{
	srand((unsigned)time(NULL));
	char str[] = "thigafgfgisfreghtssfswbhr",k[]="is";
	int n = 10, *A = Randoms(n);
	printArray(A, 2, 5);

	std::cout << BruteForceClosestPoints(A,5);

	delete A;
	getchar();
    return 0;
}

