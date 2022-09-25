#include <iostream>
// 0 (N) runtime.
	
void foo(int* sum, int* product) {
	*sum = 0;
	*product = 1;
	int array[] = {1, 2, 3, 4, 5};
	int len = sizeof(array)/sizeof(array[0]);
	
	for (int i = 0; i < len; i++) {
		*sum += array[i];
	}
	
	for (int i = 0; i < len; i++) {
		*product *= array [i];
	}
}
int main() {
	int sum, product;
	foo(&sum, &product);
	std::cout << sum << ", " << product;
	
	return 0;
}

