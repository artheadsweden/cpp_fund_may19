#include "Temperature.h"

Temperature::Temperature() : temp(0.0) {}

Temperature::Temperature(float t) : temp(t) {}

float Temperature::get_farenheit() const
{
	return temp * 9 / 5 + 32;
}

float Temperature::get_celsius() const
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

Temperature operator +(const float& first, const Temperature & second)
{
	return Temperature(first + second.temp);
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
	Temperature old_temp = Temperature(temp);
	temp++;
	return old_temp;
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
	Temperature old_temp = Temperature(temp);
	temp--;
	return old_temp;
}
ostream& operator <<(ostream & os, const Temperature & other)
{

	os << other.temp << "C and " << other.get_farenheit() << "F";
	return os;
}