#pragma once

int randRange(int min = 0, int max = 99);
int * Randoms(int min = 0, int max = 99, int number = 10);
int * InputFromFile(const char *s ,int number);

void Swap(void *a, void *b, size_t s = 4);
void printArray(int *p ,int col, int row = 1);