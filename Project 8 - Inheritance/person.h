#pragma once
#include<iostream>
#include<string>
using namespace std;

class person
{
public:
	void setFirstName(string text)
	{
		fName = text;
	}
	void setLastName(string text)
	{
		lName = text;
	}
	void setStreetAddress(string text)
	{
		address = text;
	}
	void setCity(string text)
	{
		city = text;
	}
	void setState(string text)
	{
		state = text;
	}
	void setZip(int num)
	{
		zip = num;
	}
	void setPhoneNumber(string text)
	{
		phone = text;
	}

	string getFirstName()
	{
		return fName;
	}
	string getLastName()
	{
		return lName;
	}
	string getStreetAddress()
	{
		return address;
	}
	string getCity()
	{
		return city;
	}
	string getState()
	{
		return state;
	}
	int getZip()
	{
		return zip;
	}
	string getPhoneNumber()
	{
		return phone;
	}

private:
	string fName, lName, address, city, state, phone;
	int zip;
};