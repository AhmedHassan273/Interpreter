#ifndef _FOURA_H_
#define _FOURA_H_
#include "includes.h"
#include "Scope.h"
#include "Value.h"
#include "Parser.h"
#include "AST.h"

class Interpreter
{
	vector <Value * > values;
	int index;
	Parser *parser;
	Value *Evaluate(Exp *, Scope *);
	Value *DoBiOperation(string, Value*, Value*);
	Scope *Global;
public:

	Interpreter(Parser*);
	~Interpreter();
	void Evaluate_expressions();
	bool has_Values();
	Value* NextVal();
};

#endif
