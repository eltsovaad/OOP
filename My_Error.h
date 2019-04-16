#pragma once
#include <exception>
#include <iostream>
using namespace std;

class My_Error :
	public exception
{
public:
	My_Error();
	~My_Error();
	//virtual const char* what() const throw();
};

