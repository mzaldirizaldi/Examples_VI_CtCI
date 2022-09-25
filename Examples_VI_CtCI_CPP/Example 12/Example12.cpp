#include <iostream>
#include <string>
// O (n2 * n!) runtime.

void permutation (std::string str, std::string prefix) {
	if (str.length() == 0) {
		std::cout << prefix << std::endl;
	} else {
		for (int i = 0; i < str.length(); i++) {
			std::string rem = str.substr(0, i) + str.substr(i + 1);
			permutation(rem, prefix + str.at(i));
		}
	}
}

int main() {
	std::string str = "Lucy";
	std::string prefix = "";
	permutation(str, prefix);
	
	return 0;
}
