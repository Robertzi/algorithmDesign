// TheDesignAndAnalysisOfAlgorithms.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int main()
{
	srand((unsigned)time(NULL));
	char filename[]="input.txt", str[] = "thigafgfgisfreghtssfswbhr",k[]="is";
	int n = 10, *A = InputFromFile(filename,n);
	printArray(A, 10);
	;
	std::cout << BinarySearch(A, 10,49);
	//printArray(A, 10);

	delete A;
	getchar();
    return 0;
}

