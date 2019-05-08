#include <iostream>

using namespace std;

class Temperature
{
public:
	Temperature();
	explicit Temperature(float t);
	float get_farenheit();
	float get_celsius();
	void set_temp(float t);

	//Temperature add(const Temperature& other);
	Temperature operator +(const Temperature& other);
	Temperature operator +(const float& other);
	Temperature operator -(const Temperature& other);
	Temperature operator *(const Temperature& other);
	Temperature operator /(const Temperature& other);
	friend Temperature operator +(const float& first, const Temperature& second);
	friend ostream& operator <<(ostream& os, const Temperature& other);
private:
	float temp;
};

Temperature::Temperature() : temp(0.0) {}

Temperature::Temperature(float t) : temp(t) {}

float Temperature::get_farenheit()
{
	return temp * 9 / 5 + 32;
}

float Temperature::get_celsius()
{
	return temp;
}

void Temperature::set_temp(float t)
{
	temp = t;
}

/*
Temperature Temperature::add(const Temperature& other)
{
	return Temperature(temp + other.temp);
}
*/

Temperature Temperature::operator +(const Temperature& other)
{
	return Temperature(temp + other.temp);
}

Temperature Temperature::operator +(const float& other)
{
	return Temperature(temp + other);
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

Temperature operator +(const float& first, const Temperature& second)
{
	return Temperature(first + second.temp);
}

ostream& operator <<(ostream& os, const Temperature& other)
{
	os << other.temp << "C";
	return os;
}

int main()
{
	Temperature t1(12.1f);
	Temperature t2(14.1f);
	Temperature t3(15.1f);

	Temperature t4 = 3.4f + t1;

	cout << t4.get_celsius() << endl;
	Temperature t5 = t3 / t1;
	cout << "Ok: " << t5 << " is the temp" << endl;
	return 0;
}