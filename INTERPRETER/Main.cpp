#include "Interpreter.h"

int main()
{
	string input;
	getline(cin, input);
	try
	{
		Lexer * lexer = new Lexer(input);
		Parser * parser = new Parser(lexer);
		Interpreter * interpreter = new Interpreter(parser);
		interpreter->Evaluate_expressions();
		while (interpreter->has_Values())
		{
			Value * res = interpreter->NextVal();
			if (res != nullptr)
			{
				if (res->GetType() == PRINT_VALUE)
				{
					cout << res->ToString() << endl;
				}
			}
		}
	}
	catch (Error * error)
	{
		cout << error->Message << endl;
	}
}