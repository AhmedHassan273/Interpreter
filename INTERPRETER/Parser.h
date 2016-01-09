#ifndef __Parser_H__
#define __Parser_H__

#include "Lexer.h"
#include "AST.h"
#include "includes.h"
class Parser
{
	Lexer *lexer;
	Token NextTok;
	bool not_keyword_exp = false; // true -> looks for a comparison / variable expression
								  // false -> look for any expression
	int index;
	vector <Exp *> expressions;

	Exp *Expr();
	Exp *CompExpr();
	Exp *ArithExpr();
	Exp *Term();
	Exp *Primary();

	void Consume(string lexeme);
	void Consume(TType tokenType);
public:
	void fill_expression();
	bool has_expressions();
	Exp* NextExp();
	Parser(Lexer*);
	~Parser();
};
#endif
