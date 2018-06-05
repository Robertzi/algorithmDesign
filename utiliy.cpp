#include "stdafx.h"
#include "utiliy.h"

int * InputFromFile(const char *s, int number)
{
	std::string filename = s;
	std::fstream inputfs;
	inputfs.open(filename);
	if (!inputfs.is_open())
	{
		inputfs.clear();
		inputfs.open(filename, std::ios::out); // 创建文件。
		inputfs.close();
		inputfs.open(filename);
		return NULL;
	}
	char buffer[256];
	inputfs.getline(buffer, 256);
	//std::cout << buffer << std::endl;
	char *p = strtok(buffer, "\t");
	int i = 0, *arr = new int[number];
	while (p&&i<number)
	{
		arr[i] = atoi(p);
		//std::cout << p << ' ';
		p = strtok(NULL, "\t");
		i++;
	}
	return arr;
}

int randRange(int min, int max)
{
	return (int)((max - min + 1)*((double)rand() / RAND_MAX) + min);
}

int * Randoms(int min, int max, int number)
{
	int *p = new int[number];
	for (int i = 0; i < number; i++)
	{
		p[i] = randRange(min,max);
	}
	return p;
}

void printArray(int *p, int col, int row)
{
	for (int i = 0; i < col*row; i++)
	{
		std::cout << p[i] << ' ';
		if (i%col == col - 1) std::cout << std::endl;
	}
}

void Swap(void *a, void *b, size_t s) {
	void *t = malloc(s);
	memcpy(t, a, s);
	memcpy(a, b, s);
	memcpy(b, t, s);
	free(t);
}
