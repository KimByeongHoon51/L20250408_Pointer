#include <iostream>

int* Resize(int* Original, int OriginalSize, int NewSize);

using namespace std;

int main()
{
	//int* DynamicArray = new int[10];

	//for (int i = 0; i < 10; ++i) 
	//{
	//	DynamicArray[i] = (i + 1) * 3;
	//}

	//int* temp = new int[20]; // Create new array

	//for (int i = 0; i < 10; ++i) 
	//{
	//	temp[i] = DynamicArray[i]; // Copy previous array
	//}

	//for (int i = 10; i < 20; ++i) 
	//{
	//	temp[i] = (i - 9) * 4; // 4, 8, 12, ..., 40
	//}

	//delete[] DynamicArray;
	//DynamicArray = temp;

	//for (int i = 0; i < 20; ++i) 
	//{
	//	cout << DynamicArray[i] << endl;
	//}

	//delete[] DynamicArray;

	int* DynamicArray = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		DynamicArray[i] = (i + 1) * 3;
	}

	DynamicArray = Resize(DynamicArray, 10, 20);

	for (int i = 10; i < 20; ++i)
	{
		DynamicArray[i] = (i - 9) * 4;
	}
	for (int i = 0; i < 20; ++i)
	{
		cout << DynamicArray[i] << endl;
	}

	return 0;
}

int* Resize(int* Original, int OriginalSize, int NewSize)
{
	int* NewDynamicArray = new int[NewSize];

	for (int i = 0; i < OriginalSize; ++i)
	{
		NewDynamicArray[i] = Original[i];
	}
	delete[] Original;
	Original = nullptr;

	Original = NewDynamicArray;
	NewDynamicArray = nullptr;

	return Original;
}