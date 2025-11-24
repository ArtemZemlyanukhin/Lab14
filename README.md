# Домашнее задание к работе 13

## Условие задачи
Поиск порядкового номера минимального значения элементов,
больших заданного значения А


## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Задать исходные данные:
   - `array[N]` — массив для заполнения текстом.
   - `size` —  размер заполняемого массива
   - `A` — заданное значение А
4. Вывести результат поиска слов в тексте
5. **Конец**

### Блок-схема


 



## 2. Реализация программы
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
## 3. Результаты работы программы

Введите размер массива: 12

Введите значение А: 6

номер элемента=0 значение=1

номер элемента=1 значение=2

номер элемента=2 значение=3

номер элемента=3 значение=4

номер элемента=4 значение=5

номер элемента=5 значение=6

номер элемента=6 значение=7

номер элемента=7 значение=8

номер элемента=8 значение=9

номер элемента=9 значение=10

номер элемента=10 значение=11

номер элемента=11 значение=12

Найден элемент № 6: 7
## 4. Информация о разработчике

Землянухин Артём бИЦ-252
