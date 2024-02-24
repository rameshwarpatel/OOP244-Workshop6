#include<iostream>
#include<array>



using namespace std;

int main() {
	const size_t numbers = 6;
	const size_t rows = 10;
	const size_t columns = 6;

	array<int, numbers> myArray{ 212, 101, 1, 990, 66, 88};

	array<array<int, columns>, rows> myBuckets{ 0 };

	for (int i = 0; i < numbers; i++) {
		int index = myArray[i] % 10; //Setting index in myBucket array
		myBuckets[index][i] = myArray[i];

	}

	//Gether pass
	int index{ 0 };
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (myBuckets[i][j] != 0) {
				myArray[index] = myBuckets[i][j];
				index++;
			}
		}
	}



	cout << endl;

	//Reseting myBucket to 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			myBuckets[i][j] = 0;

		}

	}

	//Tenth place sorting //Placing in bucket
	for (int i = 0; i < numbers; i++) {
		int index = (myArray[i] % 100) / 10; //Setting index in myBucket array
		myBuckets[index][i] = myArray[i];

	}
	//Tenth place gether
	int indexT{ 0 };
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (myBuckets[i][j] != 0) {
				myArray[indexT] = myBuckets[i][j];
				indexT++;
			}
		}
	}
	//Reseting myBucket to 0; //For Hundreth place sort
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			myBuckets[i][j] = 0;

		}

	}
	//Hundredth place sorting //Placing in bucket
	for (int i = 0; i < numbers; i++) {
		int index = (myArray[i] % 1000) / 100; //Setting index in myBucket array
		myBuckets[index][i] = myArray[i];

	}
	//Hundredth place gether
	int indexH{ 0 };
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (myBuckets[i][j] != 0) {
				myArray[indexH] = myBuckets[i][j];
				indexH++;
			}
		}
	}
	//Outputting myArray
	for (int i = 0; i < numbers; i++) {
		cout << myArray[i] << "\t";
	}

	/*
	cout << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << myBuckets[i][j] << "\t";

		}
		cout << endl;

	}
	*/
	
	return 0;
}
