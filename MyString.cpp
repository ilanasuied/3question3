//ilana suied
//324523141
//sadna c++
//this program receives 2 words and makes modifications to them
#include "MyString.h"
#include <cstring>
#include <iostream>
#define CRT_SECURE_NO_WARNINGS
#pragma warning (disable:4996)
using namespace std;
//ctor
MyString::MyString(const char* s)
{
	if (s)
	{
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	else
		str = NULL;
}
//copy ctor 
MyString::MyString(const MyString& ms)
{
	len = strlen(ms.str);
	if (ms.str)
	{
		str = new char[len + 1];
		strcpy(str, ms.str);
	}
	else
		str = NULL;
}

char* MyString::getString() const
{
	return str;
}

void MyString::setString(const char* s)
{
	if (s)
	{
		int len = strlen(s) + 1;
		str = new char[len];
		strcpy(str, s);
	}
	else str = NULL;
}
int MyString::getLen()const
{
	return len;
}
//=
MyString& MyString::operator=(const MyString& ms)
{
	len = ms.len;
	if (str)
		delete[] str;
	if (ms.str)
	{
		len = strlen(ms.str);
		str = new char[len + 1];
		strcpy(str, ms.str);
	}
	else
		str = NULL;
	return *this;
}

//==
bool MyString::operator==(const MyString& ms) const
{
	bool flagthis = false;
	bool flagStr = false;
	//first check if the first letter is uppercase or lowercase
	if (str[0] <= 90 && str[0] >= 65)
	{
		str[0] += 32;//change the letter on a lowercase letter
		flagthis = true;//true when the letter is modified
	}
	if (ms.str[0] <= 90 && ms.str[0] >= 65)
	{
		ms.str[0] += 32;//change the letter on a lowercase letter
		flagStr = true;//true when the letter is modified
	}
	//compare the words
	if (strcmp(str, ms.str))
	{
		if (flagthis)//if the letter was modified
			str[0] -= 32;//remove the change
		if (flagStr)//if the letter was modified
			ms.str[0] -= 32;//remove the change
		return false;
	}

	if (flagthis)//if the letter was modified
		str[0] -= 32;//remove the change
	if (flagStr)//if the letter was modified
		ms.str[0] -= 32;//remove the change
	return true;
		
}
//print
void MyString::print() const
{
	if (str) cout << str << endl;
}
bool MyString::operator >( char* _str)	// Change to object
{
	bool flagthis = false;
	bool flagStr = false;
	//first check if the first letter is uppercase or lowercase
	if (str[0] <= 90 && str[0] >= 65)
	{
		str[0] += 32;//change the letter on a lowercase letter
		flagthis = true;//true when the letter is modified
	}
	if (_str[0] <= 90 && _str[0] >= 65)
	{
		_str[0] += 32;//change the letter on a lowercase letter
		flagStr = true;//true when the letter is modified
	}
	//compare the words
	if (strcmp(str, _str) > 0)
	{
		if (flagthis)//if the letter was modified
			str[0] -= 32;//remove the change
		if (flagStr)//if the letter was modified
			_str[0] -= 32;//remove the change
		return true;
	}

	if (flagthis)//if the letter was modified
		str[0] -= 32;//remove the change
	if (flagStr)//if the letter was modified
		_str[0] -= 32;//remove the change
	return false;
}
bool MyString::operator <( char* _str)	// Change to object
{
	bool flagStr = false;
	bool flag = false;
	//first check if the first letter is uppercase or lowercase
	if (str[0] <= 90 && str[0] >= 65)
	{
		str[0] += 32;//change the letter on a lowercase letter
		flag = true;//true when the letter is modified
	}
	if (_str[0] <= 90 && _str[0] >= 65)
	{
		_str[0] += 32;//change the letter on a lowercase letter
		flagStr = true;//true when the letter is modified
	}
	//compare the words
	if (strcmp(str, _str) < 0)
	{
		if (flag)//if the letter was modified
			str[0] -= 32;//remove the change
		if (flagStr)//if the letter was modified
			_str[0] -= 32;//remove the change
		return true;
	}
	if (flag)//if the letter was modified
		str[0] -= 32;//remove the change
	if (flagStr)//if the letter was modified
		_str[0] -= 32;//remove the change
	return false;
}
bool MyString::operator <=( char* _str)// Change to object
{
	bool flagStr = false;
	bool flag = false;
	//first check if the first letter is uppercase or lowercase
	if (str[0] <= 90 && str[0] >= 65)
	{
		str[0] += 32;//change the letter on a lowercase letter
		flag = true;//true when the letter is modified
	}
	if (_str[0] <= 90 && _str[0] >= 65)
	{
		_str[0] += 32;//change the letter on a lowercase letter
		flagStr = true;//true when the letter is modified
	}

	//compare the words
	if (strcmp(_str, str) > 0 || strcmp(_str, str) == 0)
	{
		if (flag)//if the letter was modified
			str[0] -= 32;//remove the change
		if (flagStr)//if the letter was modified
			_str[0] -= 32;//remove the change
		return true;
	}
	if (flag)//if the letter was modified
		str[0] -= 32;//remove the change
	if (flagStr)//if the letter was modified
		_str[0] -= 32;//remove the change
	return false;
}
bool MyString::operator >=( char* _str)// Change to object
{
	bool flagStr = false;
	bool flag = false;
	//first check if the first letter is uppercase or lowercase
	if (str[0] <= 90 && str[0] >= 65)
	{
		str[0] += 32;//change the letter on a lowercase letter
		flag = true;//true when the letter is modified
	}
	if (_str[0] <= 90 && _str[0] >= 65)
	{
		_str[0] += 32;//change the letter on a lowercase letter
		flagStr = true;//true when the letter is modified
	}

	if (strcmp(str, _str) > 0 || strcmp(str, _str) == 0)
	{
		if (flag)//if the letter was modified
			str[0] -= 32;//remove the change
		if (flagStr)//if the letter was modified
			_str[0] -= 32;//remove the change
		return true;
	}
	if (flag)//if the letter was modified
		str[0] -= 32;//remove the change
	if (flagStr)//if the letter was modified
		_str[0] -= 32;//remove the change
	return false;
}
char& MyString::operator[](int index)
{	
	return str[index];
}
MyString MyString::insert(int index, const char* s)
{//I didnt use str functions because it gave me errors on the moodle (i dont know why)
	MyString newStr;
	newStr.len = strlen(s) + strlen(str);
	newStr.str = new char[newStr.len+1];
	
	//the first word up to index
	for (int i = 0; i < index; i++)
	{
		newStr.str[i] = str[i];
	}
	//the 2nd word
	for (int i = 0; i < strlen(s); i++)
	{
		newStr.str[index + i] = s[i];
	}
	//the end of the 1st word
	for (int j=0, i = index+strlen(s); i < newStr.len; i++, j++)
	{
		newStr.str[i] = str[index+j];
	}
	newStr.str[newStr.len] = '\0';
	newStr.print();
	return newStr;
}
