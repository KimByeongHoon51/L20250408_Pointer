#include <iostream>

using namespace std;

int main()
{

	/*int* DynamicArray = new int[10];

	for (int i = 0; i < 10; i++)
	{
		DynamicArray[i] = (i + 1) * 3;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << DynamicArray[i] << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		DynamicArray[i] = (i + 1) * 4;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << DynamicArray[i] << endl;
	}*/

	/*int* DynamicArray = new int[20];

	for (int i = 0; i < 10; i++)
	{
		DynamicArray[i] = (i + 1) * 3;
	}
	for (int i = 0; i < 10; i++)
	{
		DynamicArray[i + 10] = (i + 1) * 4;
	}
	for (int i = 0; i < 20; i++)
	{
		cout << DynamicArray[i] << endl;
	}*/


	int* DynamicArray = new int[10];


	for (int i = 0; i < 10; ++i) {
		DynamicArray[i] = (i + 1) * 3;
	}

	int* temp = new int[20]; // 货肺款 硅凯 积己

	for (int i = 0; i < 10; ++i) {
		temp[i] = DynamicArray[i];
	}

	for (int i = 10; i < 20; ++i) {
		temp[i] = (i - 9) * 4; // 4, 8, 12, ..., 40
	}

	delete[] DynamicArray;
	DynamicArray = temp;

	for (int i = 0; i < 20; ++i) {
		cout << DynamicArray[i] << endl;
	}

	delete[] DynamicArray;

	return 0;
}
