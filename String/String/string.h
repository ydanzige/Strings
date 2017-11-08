#pragma once

class MyString
{
private:
	char* m_str;
	size_t m_size;
public:
	//ctor
	MyString();
	MyString(size_t length);
	MyString(const MyString&);

	//dtor
	~MyString();


	//return the size of the string
	size_t GetLength()const;

	/*
	assign some string
	params: char* - string to assign
	*/
	void Assign(const char *str);

	/*
	assign some string
	params: char* - string to assign
	*/
	void Assign(const MyString &str);


	/*
	assign string from index to some length
	Example : Assign("Hello world" , 6 , 5) -> world
	params: char * - string to assign from him
	size_t from- index to start assign from him
	size_t length - the length of assign string
	*/
	void Assign(const char *str, const size_t from, const size_t length);

	/*
	assign string from index to some length
	Example : Assign("Hello world" , 6 , 5) -> world
	params: char * - string to assign from him
	size_t from- index to start assign from him
	size_t length - the length of assign string
	*/
	void Assign(const MyString &str, const size_t from, const size_t length);

	/*
	assign string for some  length from the begining
	Example : Assign("Hello world" , 5) -> Hello
	params: char * - string to assign from him
	size_t length - the length of assign string
	*/
	void Assign(const char *str, const size_t length);

	/*
	assign string for some  length from the begining
	Example : Assign("Hello world" , 5) -> Hello
	params: char * - string to assign from him
	size_t length - the length of assign string
	*/
	void Assign(const MyString &str, const size_t length);

	/*
	assign multyple time some char
	Example :Assign(4,'*') -> ****
	size_t count - nymber of multyple
	char ch - the char to assign
	*/
	void Assign(const size_t count, const char ch);


	/*
	delete the old string and init the new one
	*/
	void InitStr(const size_t length);

	/*
	return char in spesific index
	param : size_t index of char
	*/
	char CharAt(const size_t index);


	/*
	std::string str2="Writing ";

	Example : str.append(str2); ->"Writing "
	params: char* string to append
	*/
	void Append(const char *otherString);

	/*
	std::string str2="Writing ";

	Example : str.append(str2); ->"Writing "
	params: char* string to append
	*/
	void Append(const MyString &otherString);

	/*
	Example: str.append("prsize_t 10 and then 5 more",6,3); -> "10 "
	params: char* -string to append from her
	size_t from - index to start append from him
	size_t to - index to stop
	*/
	void Append(const char *otherString, const size_t from, const size_t length);

	/*
	Example: str.append("prsize_t 10 and then 5 more",6,3); -> "10 "
	params: MyString -string to append from her
	size_t from - index to start append from him
	size_t to - index to stop
	*/
	void Append(const MyString &otherString, const size_t from, const size_t length);

	
	/*
	param: char* the string
	size_t length - the length from the begining that want to append
	Example: str.append("dots are cool",5);  ->   "dots "
	*/
	void Append(const char *otherString, const size_t length);

	/*
	param: string the string
	size_t length - the length from the begining that want to append
	Example: str.append("dots are cool",5);  ->   "dots "
	*/
	void Append(const MyString &otherString, const size_t length);

	/*
	Example: str.append(10,'.');   ".........."
	params: counter - size_t the number of multple time the char in the second param
	char - char to append
	*/
	void Append(const size_t count, const char ch);

	size_t Compare(const char *otherString);

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
	char* GetString()const;

};
