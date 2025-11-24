#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE 
#define N 30
task(int *ptr_array,int size,int A);
void elements(int* ptr_array,int size);
void put_elements(int* ptr_array, int size);
main() {
	int size,array[N];
	int A;
	setlocale(LC_CTYPE, "RUS");
	printf("Введите размер массива: ");
	scanf("%d", &size);
	printf("Введите значение А: ");
	scanf("%d", &A);
	elements(array, size);
	put_elements(array, size);
	int res=task(array,size,A);
	printf("Найден элемент № %d: %d\n", res, array[res]);
}
task(int* ptr_array, int size, int A) {
	int minind = -1;
	for (int i = 0; i < size; i++) {
		if (ptr_array[i] > A) {
			if (minind == -1 || ptr_array[i] < ptr_array[minind]) minind = i;
		}
	}
	return minind;
}
void elements(int* ptr_array, int size) {
	for (int i = 0; i < size; i++)
		ptr_array[i] = i + 1;
}
void put_elements(int* ptr_array, int size) {
	for (int i = 0; i < size; i++) printf("номер элемента=%d значение=%d\n", i,ptr_array[i]);
}