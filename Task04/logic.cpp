// Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать эффективный 
// алгоритм и реализовать функцию (или программу), которая меняет 
// экстремальные элементы вектора местами. Если экстремальных элементов
// несколько, то необходимо поменять последние найденные элементы.
// Дополнительно в функции необходимо предусмотреть механизм "защиты от дурака"
// для работы с некорректными данными.

#include "logic.h"

int get_last_max_marks_index(int array[], int size) {
	int index = 0;

	return index;

	for (int i = size - 1; i >= 0; i--)
	{
		if (array[i] >= array[index]) {
			index = i;
		}
	}
	return index;
}

int get_last_min_marks_index(int array[], int size) {
	int index = size - 1;

	for (int i = 1; i < size; i++)
	{
		if (array[i] > array[index]) {
			index = i;
		}
	}
	return index;
}

void swap_extrem_elements(int array[], int size) {
	if (size <= 0) {
		return;
	}

	int index_max = get_last_max_marks_index(array, size);
	int index_max = get_last_min_marks_index(array, size);

	int t = array[index_max];
	array[index_max] = array[index_min];
	[index_m]
}