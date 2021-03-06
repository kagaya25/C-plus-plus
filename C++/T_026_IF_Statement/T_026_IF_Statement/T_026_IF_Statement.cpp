// T_026_IF_Statement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

/*
C++ if statement
An if statement consists of a boolean expression followed by one or more statements.

Syntax
The syntax of an if statement in C++ is −

if(boolean_expression) {
// statement(s) will execute if the boolean expression is true
}
If the boolean expression evaluates to true, then the block of code inside the if statement
will be executed. If boolean expression evaluates to false, then the first set of code after
the end of the if statement (after the closing curly brace) will be executed.
*/
int main()
{
	// local variable declaration:
	int a = 10;

	// check the boolean condition
	if (a < 20) {
		// if condition is true then print the following
		cout << "a is less than 20;" << endl;
	}
	cout << "value of a is : " << a << endl;
	system("pause");
	return 0;
}

