// two-dimensional array example


#include <iostream>

int main()
{
	int tables[10][10]{ // two dimensional array that represents the numbers 1-10 and their multiplication by 1-10
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		{2, 4, 6, 8, 10, 12, 14, 16, 18, 20},
		{3, 6, 9, 12, 15, 18, 21, 24, 27, 30},
		{4, 8, 12, 16, 20, 24, 28, 32, 36, 40},
		{5, 10, 15, 20, 25, 30, 35, 40, 45, 50},
		{6, 12, 18, 24, 30, 36, 42, 48, 54, 60},
		{7, 14, 21, 28, 35, 42, 49, 56, 63, 70},
		{8, 16, 24, 32, 40, 48, 56, 64, 72, 80},
		{9, 18, 27, 36, 45, 54, 63, 72, 81, 90},
		{10, 20, 30, 40, 50, 60, 70, 80, 90, 100}

	};
	
	int base{ 0 };																			// initialize base variable to keep track of current array/base
	int factor{ 0 };																		// intialize factor variable to keept track of current element/factor
	for (int array{ 0 }; array < sizeof(tables) / sizeof(tables[0]); ++array) {				// cycle through the arrays
		++base;																				// increment base to show which array/base we're working with
		factor = 0;																			// reset factor variable for next array/base
		for (int element{ 0 }; element < sizeof(tables) / sizeof(tables[0]); ++element) {   // cycle through elements of current array
			++factor;																		// increment factor to show which element in the array we're working with
			std::cout << base << '*' << factor << "=" << tables[array][element] << '\t';    // prints current array/base and element/factor and its corresponding value
		}
		std::cout << '\n';
	}

	return 0;
}