#include "string.h"
#include <iostream>
#include <string>
using namespace std;


MyString::MyString()
	:m_str(NULL), m_size(0)
{

}
MyString::MyString(int length)
{
	InitStr(length);
}

MyString::~MyString()
{
	if (m_str)
	{
		delete m_str;
		m_str = NULL;
	}
}

int MyString::GetLength() {

	return m_size;
}

void MyString::Assign(char *str)
{
	InitStr(strlen(str));
	strcpy_s(m_str, m_size + 1, str);
}

void MyString::Assign(char *str, int from, int length)
{
	InitStr(length);
	for (int i = 0; i < length; i++)
	{
		m_str[ i ] = str[ from + i ];
	}
	m_str[ length ] = '\0';
}

void MyString::Assign(char *str, int length)
{
	InitStr(length);
	for (int i = 0; i < length; i++)
	{
		m_str[ i ] = str[ i ];
	}
	m_str[ length ] = '\0';
}

void MyString::Assign(int count, char ch)
{
	InitStr(count);
	for (int i = 0; i < count; i++)
	{
		m_str[ i ] = ch;
	}
	m_str[ count ] = '\0';
}

void MyString::InitStr(int length)
{
	if (m_str)
	{
		delete m_str;
	}
	m_size = length;
	m_str = new char[ m_size + 1 ];
	for (int i = 0; i < m_size; i++)
	{
		m_str[ i ] = ' ';
	}
}

char MyString::CharAt(int index)
{
	return m_str[ index ];
}


void MyString::Append(char *otherString)
{
	int newStrLen = strlen(otherString);
	int oldSize = m_size;
	m_size += newStrLen;
	char* str = new char[ m_size + 1 ];
	strcpy_s(str, oldSize + 1, m_str);
	strcat_s(str, m_size + 1, otherString);
	delete m_str;
	m_str = new char[ m_size + 1 ];
	strcpy_s(m_str, m_size + 1, str);
	delete str;
}

void MyString::Append(char *otherString, int from, int length)
{
	int oldSize = m_size;
	m_size += length;
	char* str = new char[ m_size + 1 ];
	strcpy_s(str, strlen(str) + 1, m_str);
	for (int i = 0; i < length; i++)
	{
		str[ oldSize + i ] = otherString[ from + i ];
	}
	str[ m_size ] = '\0';
	delete m_str;
	m_str = new char[ m_size + 1 ];
	strcpy_s(m_str, strlen(m_str) + 1, str);
	delete str;
}

void MyString::Append(char *otherString, int length)
{
	int oldSize = m_size;
	m_size += length;
	char* str = new char[ m_size + 1 ];
	strcpy_s(str, strlen(str) + 1, m_str);
	for (int i = 0; i < length; i++)
	{
		str[ oldSize + i ] = otherString[ i ];
	}
	str[ m_size ] = '\0';
	delete m_str;
	m_str = new char[ m_size + 1 ];
	strcpy_s(m_str, m_size + 1, str);
	delete str;
}

void MyString::Append(int count, char ch)
{
	int oldSize = m_size;
	m_size += count;
	char* str = new char[ m_size + 1 ];
	strcpy_s(str, strlen(str) + 1, m_str);
	for (int i = 0; i < count; i++)
	{
		str[ oldSize + i ] = ch;
	}
	str[ m_size ] = '\0';
	delete m_str;
	m_str = new char[ m_size + 1 ];
	strcpy_s(m_str, m_size + 1, str);
	delete str;
}

int MyString::Compare(char *otherString)
{
	return strcmp(m_str, otherString);
}

bool MyString::IsEmpty()
{
	return m_size == 0 ? true : false;
}

void MyString::Clear()
{
	if (m_size > 0)
	{
		m_str[ 0 ] = '\0';
	}
	m_size = 0;
}


char* MyString::print()
{
	return m_str == NULL ? " " : m_str;
}


void main()
{
	MyString str;
	string s = "Hello World";
	str.Assign("Hello");
	cout << str.print() << endl;
	str.Clear();
	cout << str.print() << endl;
	str.Append("Hello");
	cout << str.print() << endl;
	str.Append(" World");
	cout << str.print() << endl;
	cout << "hello wrold char in index 3 is: " << str.CharAt(3) << endl;
	cout << "hello world get length" << str.GetLength() << endl;
	cout << "comper hello world with world hello " << str.Compare("world hello") << endl;

}