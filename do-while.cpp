#include <iostream>

using std::cin;
using std::cout;

int main()
{
	int choice{};

	do {
		cout << "Enter a number from 1 to 5: ";
		cin >> choice;
	} while (choice < 1 || choice > 5);

	cout << "You picked " << choice << '\n';
	return 0;
}
