#include <iostream>

int main() {
	int number[]{ 3, 5, 1, 2, 4 };

	for (int i{ 0 }; i < sizeof(number) / sizeof(number[0]); ++i) {
		std::cout << number[i] << " ";
	}

	std::cout << '\n';

	for (int i{ 0 }; i < sizeof(number) / sizeof(number[0]); ++i) {
		for (int j{ 0 }; j < 4; ++j) {
			if (number[j] > number[j + 1]) {
				int swap{};
				swap = number[j + 1];
				number[j + 1] = number[j];
				number[j] = swap;
			}
		}
	}

	for (int i{ 0 }; i < sizeof(number) / sizeof(number[0]); ++i) {
		std::cout << number[i] << " ";
	}

	return 0;
}