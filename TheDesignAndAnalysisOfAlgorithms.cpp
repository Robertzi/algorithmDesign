// TheDesignAndAnalysisOfAlgorithms.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int main()
{
	srand((unsigned)time(NULL));
	char filename[] = "input.txt";
	int n = 10, *A = InputFromFile(filename, n);
	printArray(A, n);

	delete A;
	getchar();
    return 0;
}

