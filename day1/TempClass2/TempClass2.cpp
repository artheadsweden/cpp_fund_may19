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

Temperature Temperature::operator -(const Temperature& other)
{
	return Temperature(temp - other.temp);
}

Temperature Temperature::operator *(const Temperature& other)
{
	return Temperature(temp * other.temp);
}

Temperature Temperature::operator /(const Temperature& other)
{
	return Temperature(temp / other.temp);
}


int main()
{
	Temperature t1(12.1f);
	Temperature t2(14.1f);
	Temperature t3(15.1f);

	Temperature t4 = t1 + 3.4f;

	cout << t4.get_celsius() << endl;
	Temperature t5 = t3 / t1;
	cout << t5.get_celsius() << endl;
	return 0;
}