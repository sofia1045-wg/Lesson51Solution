#include "util.h"
#include "logic.h"

int main() {
	double array[DEFAULT_SIZE];

	int size;
	cout << "Input the size of array: ";
	cin >> size;

	init_user(array, size);

	print("Array: " + convert(array, size) + ".\n");

	double s = sum(array, size);

	print("\nResult sum is " + to_string(s) + ".\n");

	return 0;
}