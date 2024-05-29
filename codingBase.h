#pragma once
#include <iostream>
#include <string>
using namespace std;
class CodingBase
{
protected:
	string Text;
	int key;
public:
	CodingBase(string str, int n) :Text(str), key(n) {};
	virtual string Coding(string, int) = 0;
	virtual string Decoding(string, int) = 0;
};
