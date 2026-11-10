#include <iostream>

using std::cout;

int main()
{
	int sum{ 0 };

	for (int i{ 1 }; i <= 10; ++i) {
		sum += i;
		cout << "i = " << i << ", running sum = " << sum << '\n';
	}

	cout << "Total: " << sum << '\n';
	return 0;
}
