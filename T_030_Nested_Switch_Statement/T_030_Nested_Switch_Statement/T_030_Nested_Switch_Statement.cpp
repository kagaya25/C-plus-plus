// T_030_Nested_Switch_Statement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
C++ nested switch statements
It is possible to have a switch as part of the statement sequence of an outer switch. Even if the case constants of the inner and outer switch contain common values, no conflicts will arise.

C++ specifies that at least 256 levels of nesting be allowed for switch statements.

Syntax
The syntax for a nested switch statement is as follows −

switch(ch1) {
case 'A':
cout << "This A is part of outer switch";
switch(ch2) {
case 'A':
cout << "This A is part of inner switch";
break;
case 'B': // ...
}
break;
case 'B': // ...
}
*/

int main()
{
	// local variable declaration:
	int a = 100;
	int b = 200;

	switch (a) {
	case 100:
		cout << "This is part of outer switch" << endl;
		switch (b) {
		case 200:
			cout << "This is part of inner switch" << endl;
		}
	}
	cout << "Exact value of a is : " << a << endl;
	cout << "Exact value of b is : " << b << endl;
	system("pause");
	return 0;
}

