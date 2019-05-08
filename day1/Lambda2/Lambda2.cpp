#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v{ 23, 4, 13, 55, 65, 32 };
	auto sum = 0;

	for_each(v.begin(), v.end(), [&sum](int x) {sum += x; });
	cout << sum << endl;

	return 0;
}