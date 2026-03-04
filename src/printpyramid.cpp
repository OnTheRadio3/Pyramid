#include <iostream>
#include <iomanip>


void printPyramid(int height) {
	int x = 0, y = height;

	
	for (int j = 0; j < y; j++, x++) {
		std::cout << '\n' << std::setw(3 + (y - x));

		for (int i = 0; i < x * 2 + 1; i++) { 
			std::cout << '*';
		}
	}

	return;
}

int main(int argc, char **argv ) {
	if (argc < 2) {
		std::cout << "Please provide a height for your pyramid!";
		return 1;
	}

	printPyramid(std::stoi(argv[1]));

	return 0;

}
