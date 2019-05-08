#include <iostream>

using namespace std;

int main()
{

	auto f = [](int a) {
			return [a](int b) {
				return a * b;
			};
		};

	auto times2 = f(2);
	auto times3 = f(3);

	cout << times2(4) << endl;
	cout << times3(4) << endl;

	return 0;
}