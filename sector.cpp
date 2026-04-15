#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	std::string line{ "" }; int size{0};
	std::ifstream file("in.txt");
	if (file.is_open()) {
		if (std::getline(file, line)) {
			std::istringstream iss(line);
			iss >> size;
		}
		int* arr = new int[size]();
		if (std::getline(file, line)) {
			std::istringstream iss(line);
			int el{0}; int index{0};
			while (iss >> el&&index <size) {
				arr[index++] = el;
			}
		}
		for (int i = size-1; i >=0; --i)  std::cout << arr[i] << " ";
		delete[] arr;
	}
	file.close();
}
