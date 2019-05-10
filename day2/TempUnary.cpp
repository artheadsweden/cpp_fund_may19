#include <iostream>
using namespace std;

class Temperature
{
public:
	Temperature();
	Temperature(float t);
	float getFarenheit();
	float getCelsius();
	void setTemp(float t);

	Temperature operator +(const Temperature& other);
	Temperature operator -(const Temperature& other);
	Temperature operator *(const Temperature& other);
	Temperature operator /(const Temperature& other);
	Temperature operator ++();
	Temperature operator ++(int);
	Temperature operator --();
	Temperature operator --(int);

	friend Temperature operator +(const float& first, const Temperature& other);
	friend ostream& operator <<(ostream& os, const Temperature& other);
	friend istream& operator >>(istream& is, Temperature& other);
private:
	float temp;
};

Temperature::Temperature() : temp(0.0f) {}

Temperature::Temperature(float t) : temp(t) {}

float Temperature::getFarenheit()
{
	return temp * 9 / 5 + 32;
}

float Temperature::getCelsius()
{
	return temp;
}

void Temperature::setTemp(float t)
{
	temp = t;
}

Temperature Temperature::operator +(const Temperature& other)
{
	return Temperature(temp + other.temp);
}

Temperature Temperature::operator -(const Temperature & other)
{
	return Temperature(temp - other.temp);
}

Temperature Temperature::operator *(const Temperature & other)
{
	return Temperature(temp * other.temp);
}

Temperature Temperature::operator /(const Temperature & other)
{
	return Temperature(temp / other.temp);
}

// Prefix ++
Temperature Temperature::operator ++()
{
	++temp;
	return *this;
}

// Postfix ++
Temperature Temperature::operator ++(int)
{
	Temperature oldTemp = Temperature(temp);
	temp++;
	return oldTemp;
}

// Prefix --
Temperature Temperature::operator --()
{
	--temp;
	return *this;
}

// Postfix --
Temperature Temperature::operator --(int)
{
	Temperature oldTemp = Temperature(temp);
	temp--;
	return oldTemp;
}


Temperature operator +(const float& first, const Temperature & other)
{
	return Temperature(first + other.temp);
}

ostream& operator <<(ostream & os, const Temperature & other)
{
	os << other.temp;
	return os;
}

istream& operator >>(istream & is, Temperature & other)
{
	is >> other.temp;
	return is;
}

int main()
{
	Temperature t1(10.1f);
	Temperature t2 = t1--;
	cout << t2 << endl;
	cout << t1 << endl;
	cout << t1++ << endl;
	cout << ++t1 << endl;
	cout << t1 << endl;
	return 0;
}


