/**
 * Hello world, with a little more C++.
 *
 * Author: Sat Garcia (sat@sandiego.edu)
 */

#include <iostream> // include C++ io capabilities (e.g. std::cout)

int main() {
	int version = 2;

	std::cout << "Hello C++, take "; // << is the "insertion" operator
	std::cout << version;
	std::cout << "\n";

	version++;

	// you can combine multiple insertions into a single line
	std::cout << "Hello C++, take " << version << "\n";
}
