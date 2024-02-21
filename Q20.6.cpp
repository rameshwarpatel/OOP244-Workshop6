#include<iostream>
#include<array>

using namespace std;

int main()

{	
	int temp{ 0 };
	const unsigned int size = 10;
	array<int, size> myArray{ 10, 5, 7, 66, 85, 55, 78, 23, 51, 48 };

	for(unsigned int i = 0; i < size; i++) {

		cout << myArray[i]<<"\t";
	}

	
	for (int i = 0; i < size-1; i++) {
		for(int j = 0; j < size-1-i; j++)
		{ 
			if (myArray[j] > myArray[j + 1]) {

				swap(myArray[j], myArray[j + 1]);
			}
		}
	}
	cout << endl;
	cout << "After Sorting: " << endl;

	for (unsigned int i = 0; i < 10; i++) {

		cout << myArray[i] << "\t";
	}
	return 0;
}
