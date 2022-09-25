#include <iostream>
//0 (sqrt n) runtime.

int main() {
	int n;
	
	std::cout << "Please input a number: ";
	std::cin >> n;
	
	for (int x = 2; x * x <= n; x++) {
		if (n % x == 0) {
			std::cout << n << " is not a prime number.";
			return true;
		}
	}
	std::cout << n << " is a prime number.";
	return false;
}
