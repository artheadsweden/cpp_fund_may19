#include <iostream>
#include <string>
#include <vector>
using namespace std;

using namespace std;

class MyClass
{
public:
	MyClass()
	{
		value = nullptr;
		cout << "Default constructor" << endl;
	}

	MyClass(int v) : value(new int(v))
	{
		cout << "Constructor taking one value -> " << *value << endl;
	}

	~MyClass()
	{
		delete value;
	}

	MyClass(const MyClass& other) : value(other.value)
	{
		cout << "Copy constructor with value -> " << *value << endl;
	}

	MyClass(MyClass&& other) noexcept
	{
		value = nullptr;
		swap(value, other.value);
		cout << "Move constructor with value -> " << *value << endl;
	}

	MyClass& operator =(const MyClass& other)
	{
		value = other.value;
		cout << "Copy assignment operator with value -> " << *value << endl;
		return *this;
	}

	MyClass& operator =(MyClass&& other) noexcept
	{
		value = nullptr;
		swap(value, other.value);
		cout << "Move assignment operator with value -> " << *value << endl;
		return *this;
	}

	friend ostream& operator << (ostream& os, const MyClass& obj);


private:
	int* value;
};

ostream& operator << (ostream& os, const MyClass& obj)
{
	if (obj.value)
	{
		os << *obj.value;
	}
	else
	{
		os << "Null";
	}
	return os;
}



int main()
{
	vector<MyClass> my_vec;

	for (int i = 0; i < 20; i++)
	{
		MyClass m(i);
		my_vec.push_back(m);
	}

	return 0;
}