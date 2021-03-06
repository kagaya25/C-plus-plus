// T_021_Nested_loops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
A loop can be nested inside of another loop. C++ allows at least 256 levels of nesting.

Syntax
The syntax for a nested for loop statement in C++ is as follows −

for ( init; condition; increment ) {
for ( init; condition; increment ) {
statement(s);
}
statement(s); // you can put more statements.
}
The syntax for a nested while loop statement in C++ is as follows −

while(condition) {
while(condition) {
statement(s);
}
statement(s); // you can put more statements.
}
The syntax for a nested do...while loop statement in C++ is as follows −

do {
statement(s); // you can put more statements.
do {
statement(s);
} while( condition );

} while( condition );
*/

int main()
{
	int i, j;
	for (i = 2; i<100; i++) {
		for (j = 2; j <= (i / j); j++)
			if (!(i%j)) break; // if factor found, not prime
		if (j >(i / j)) cout << i << " is prime\n";
	}
	system("pause");
	return 0;

}

