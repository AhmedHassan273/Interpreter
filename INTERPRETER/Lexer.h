#ifndef __LEXER_H__
#define __LEXER_H__
#include "includes.h"

struct Token
{
	Token();
	TType type;
	string lexeme;
	Token(TType, string);
	bool Is(string lexeme);
	bool Is(TType type);
};

class Lexer
{
	string Input;
	int ptr1, ptr2;
	States state;

	Token Accept(TType type);
	void retract();
	void reset();
	char read();

	States SwitchState(char, States, TType&);
	States SwitchState_ready(char, States, TType&);
	States SwitchState_variable(char, States, TType&);
	States SwitchState_number(char, States, TType&);
	States SwitchState_string(char, States, TType&);
	States SwitchState_equality(char, States, TType&);
	States SwitchState_notequal(char, States, TType&);
	States SwitchState_and(char, States, TType&);
	States SwitchState_or(char, States, TType&);

public:
	Lexer(string);
	bool eof();
	Token Next();
};
#endif
