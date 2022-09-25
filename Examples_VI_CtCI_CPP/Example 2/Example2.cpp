#include <iostream>
//0 (N2) runtime.

int main() {
	int array[] = {1, 2, 3, 4, 5};
	int len = sizeof(array)/sizeof(array[0]);
	
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			std::cout << array[i] << ", " << array[j] << std::endl;
		}
	}
	return 0;
}
