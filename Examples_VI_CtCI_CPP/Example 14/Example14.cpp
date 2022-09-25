#include <iostream>
// O (2^N) runtime.

int fib(int n) {
	if (n <= 0) return 0;
	else if(n == 1) return 1;
	return fib(n - 1) + fib (n - 2);
}

void allFib(int n) {
	for (int i = 0; i <= n; i++) {
		std::cout << i << ": " << fib(i) << std::endl;
	}	
}

int main() {
	int n;
	allFib(20);
}
