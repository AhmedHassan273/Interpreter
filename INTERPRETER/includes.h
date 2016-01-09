#ifndef __INCLUDES_H__
#define __INCLUDES_H__

#define _CRT_SECURE_NO_WARNING

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <fstream>
#include <stdio.h>
#include <math.h>
#include <list>
#include <iomanip>

using namespace std;

enum States {
	ready,
	accept,
	variable,
	number,
	astring,
	equalty,
	notequal,
	andand,
	oror,
};

enum TType {
	Variable_Token,
	Number,
	String,
	Eof,
	Operator,
	Lbraces,
	Rbraces,
	Lparentheses,
	Rparentheses,
	And,
	Or,
	Equalty,
	Notequal,
	Bthan,
	Sthan,
	Skip,
	assign,

};
enum ExpType {
	Int_Literal,
	String_Literal,
	Bi_operator,
	Identifier,
	IdentifierCall,
	IF,
	While_exp,
	Write_exp,
};
enum ValueType
{
	INT_VALUE,
	STRING_VALUE,
	PRINT_VALUE
};
class Error
{
public:
	string Message;
	Error(string msg)
	{
		Message = msg;
	}
};
#endif
