#include <iostream>

using std::cin;
using std::cout;

int main()
{
	int value{};
	int total{ 0 };

	cout << "Enter numbers to add up (0 to total): ";
	cin >> value;

	while (value != 0) {
		total += value;
		cin >> value;
	}

	cout << "Total: " << total << '\n';
	return 0;
}
