#include <iostream>
// 0 (ab) runtime.

int main() {
	int arrayA[] = {1, 2, 3, 4, 5};
	int arrayB[] = {1, 2, 3, 4, 5};
	int lenA = sizeof(arrayA)/sizeof(arrayA[0]);
	int lenB = sizeof(arrayB)/sizeof(arrayB[0]);
	
	for (int i = 0; i < lenA; i++) {
		for (int j = 0; j < lenB; j++) {
			for (int k = 0; k < 100000; k++) {
				std::cout << arrayA[i] << ", " << arrayB[j] << std::endl;
				}
		}
	}
	return 0;
}
