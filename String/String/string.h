#pragma once

class MyString
{
private:
	char* m_str;
	int m_size;
public:
	//ctor
	MyString();

	MyString(int length);

	//dtor
	~MyString();


	//return the size of the string
	int GetLength();
	/*
	assign some string
	params: char* - string to assign
	*/
	void Assign(char *str);


	/*
	assign string from index to some length
	Example : Assign("Hello world" , 6 , 5) -> world
	params: char * - string to assign from him
	int from- index to start assign from him
	int length - the length of assign string
	*/
	void Assign(char *str, int from, int length);

	/*
	assign string for some  length from the begining
	Example : Assign("Hello world" , 5) -> Hello
	params: char * - string to assign from him
	int length - the length of assign string
	*/
	void Assign(char *str, int length);

	/*
	assign multyple time some char
	Example :Assign(4,'*') -> ****
	int count - nymber of multyple
	char ch - the char to assign
	*/
	void Assign(int count, char ch);


	/*
	delete the old string and init the new one
	*/
	void InitStr(int length);

	/*
	return char in spesific index
	param : int index of char
	*/
	char CharAt(int index);


	/*
	std::string str2="Writing ";

	Example : str.append(str2); ->"Writing "
	params: char* string to append
	*/
	void Append(char *otherString);


	/*
	Example: str.append("print 10 and then 5 more",6,3); -> "10 "
	params: char* -string to append from her
	int from - index to start append from him
	int to - index to stop
	*/
	void Append(char *otherString, int from, int length);

	/*
	param: char* the string
	int length - the length from the begining that want to append
	Example: str.append("dots are cool",5);  ->   "dots "
	*/
	void Append(char *otherString, int length);

	/*
	Example: str.append(10,'.');   ".........."
	params: counter - int the number of multple time the char in the second param
	char - char to append
	*/
	void Append(int count, char ch);

	int Compare(char *otherString);

	/*
	check if size is 0
	*/
	bool IsEmpty();


	/*
	clear the string
	*/
	void Clear();

	/*
	print string
	*/
	char* print();

};
