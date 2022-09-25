#include <iostream>
//0 (log n) runtime.

int powersOf2 (int n) {
	if (n < 1) {
		return 0;
	} else if (n == 1) {
		std::cout << "1" << std::endl;
		return 1;
	} else {
		int prev = powersOf2 (n / 2);
		int curr = prev * 2;
		std::cout << curr << std::endl;
		return curr;
	}
}

int main() {
	int n;
	powersOf2(20);
}
