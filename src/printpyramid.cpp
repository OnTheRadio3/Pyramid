#include <iostream>
#include <iomanip>

constexpr int PADDING = 3;


void printPyramid(int height) {
	int x = 0, y = height;

	
	for (int j = 0; j < y; j++, x++) {
		std::cout << '\n'
		<< std::setfill(' ')
		<< std::setw(PADDING + (y - x))
		<< '*'
		<< std::setfill('*')
		<< std::setw(x*2 + 1) << ' ';
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
