#include <iostream>
//0 (n) runtime.

int factorial (int n) {
	if (n < 0) {
		return -1;
	} else if (n == 0) {
		return 1;
	} else {
		return n * factorial(n - 1);
	}
}

int main() {
	int n;
	
	std::cout << "Please input a number: ";
	std::cin >> n;
	
	std::cout << "Factorial: " << factorial(n); 
	
	return 0;
}
