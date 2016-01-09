#ifndef _VALUE_H_
#define _VALUE_H_
#include "includes.h"
class Value
{
public:
	virtual ValueType GetType() = 0;
	virtual string ToString() = 0;
};
class IntVal : public Value
{
public:
	int Val;
	IntVal(int Val);
	virtual ValueType GetType();
	virtual string ToString();
};
class StringVal : public Value
{
public:
	string Val;
	StringVal(string Val);
	virtual ValueType GetType();
	virtual string ToString();
};
class Print : public Value
{
public:
	Value * val;
	virtual ValueType GetType();
	virtual string ToString();
};
#endif
