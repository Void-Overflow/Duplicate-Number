#include <iostream>
#include <string>

int main() {
	int arr[7];
	int duplicate = 19382165928;

	std::cout << "Enter array values at each respective index with one duplicate pair : ";
	
	for (int i = 0; i <= 6; i++) {
		std::cin >> arr[i];
		std::cout << ": ";
	}

	std::cout << '\n';

	for (int i = 0; i <= 6; i++) {
		int counter = 0;
		for (int x = 0; x <= 6; x++) {
			if (arr[i] == arr[x]){
				counter++;

				if (counter > 1) {
					duplicate = arr[i];
					break;
				}
			}
		}

		if (duplicate != 19382165928)
			break;
	}

	
	if (duplicate == 19382165928)
		std::cout << "No duplicate number found" << '\n';
	else
		std::cout << "Duplicate number: " << duplicate << '\n';

	std::string exitstr;
	std::getline(std::cin, exitstr);
	return 0;
}