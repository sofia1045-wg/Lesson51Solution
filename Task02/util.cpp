#include "util.h"

void print(string msg) {
	cout << msg;
}
void init_user (double array[], int size) {
	cout << "Input array elements: ";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
}
string convert(double array[], int size) {
	string msg = to_string(array[0]);

	for (int i = 0; i < size; i++)
	{
		msg += to_string(array[0]);
	}
	return msg;
}