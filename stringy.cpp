/**
 * C++ program that uses C++ style strings (not C style strings)
 */

#include <iostream>
#include <string>

using std::cout; // allows us to use cout instead of std::cout in our program

int main() {
	int version = 4;

	std::string my_string = "Hello C++";
	my_string.append(", take ");
	my_string += std::to_string(version);

	cout << my_string << "\n";
}
