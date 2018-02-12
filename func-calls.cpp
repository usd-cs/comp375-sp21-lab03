/**
 * C++ program that uses three types of parameters: values, pointers, and
 * references.
 */

#include <iostream>
#include <string>

using std::cout;

/**
 * Passes in a value and change it's value.
 */
void passValue(int x) {
	x = 1;
}

/**
 * Passes in a pointer to a value and updates the pointed at value.
 */
void passPointer(int *y) {
	*y = 2;
}

/**
 * Passes in a reference to a value and updates the referred to value.
 */
void passReference(int &z) {
	z = 3;
}

int main() {
	int value = 0;

	cout << "initial value is: " << value << "\n";

	passValue(value);
	cout << "value after passValue returns is: " << value << "\n";

	passPointer(&value);
	cout << "value after passPointer returns is: " << value << "\n";

	passReference(value);
	cout << "value after passReference returns is: " << value << "\n";
}
