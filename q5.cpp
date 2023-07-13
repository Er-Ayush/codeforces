#include "bits/stdc++.h"
using namespace std;

string digits = "0123456789", sign = "+-";
string dot = ".", ex = "eE";
int dfa[11][5];


void makeDFA()
{
	
	dfa[0][0] = 1;

	
	dfa[1][0] = 1;
	dfa[1][2] = 3;
	dfa[1][3] = 2;
	dfa[1][4] = 6;

	dfa[3][0] = 4;

	dfa[4][0] = 4;
	dfa[4][3] = 5;
	dfa[4][4] = 6;

	dfa[6][0] = 8;
	dfa[6][1] = 7;

	dfa[7][0] = 8;

	dfa[8][0] = 8;
	dfa[8][3] = 9;
}

// Function to build and connect
// the DFA states
void buildDFA()
{
	// Connect all the states to the
	// dead state
	for (int i = 0; i < 11; i++)
		for (int j = 0; j < 5; j++)
			dfa[i][j] = 10;

	// Function call to make DFA as
	// per the given conditions
	makeDFA();
}

// Function call to check whether an
// integer in the form of string is
// unsigned integer or not
void checkDFA(string s)
{
	// Build the DFA
	buildDFA();

	// Stores the current state
	int currentstate = 0;

	// Traverse the string
	for (int i = 0; i < s.size(); i++) {

		if (digits.find(s[i])
			!= digits.npos)

			// If at a certain state a
			// digit occurs then change
			// the current state according
			// to the DFA
			currentstate
				= dfa[currentstate][0];

		// Or +/- sign
		else if (sign.find(s[i])
				!= sign.npos)
			currentstate
				= dfa[currentstate][1];

		// Or decimal occurred
		else if (dot.find(s[i])
				!= dot.npos)
			currentstate
				= dfa[currentstate][2];

		// Or any other character
		else if (ex.find(s[i])
				!= ex.npos)
			currentstate
				= dfa[currentstate][4];

		// Or e/E or exponent sign
		else
			currentstate
				= dfa[currentstate][3];
	}

	// State 1, 4, 8 will give
	// the final answer
	if (currentstate == 1
		|| currentstate == 4
		|| currentstate == 8) {
		cout << "Unsigned integer";
	}
	else {
		cout << "Not an unsigned integer";
	}
}

// Driver Code
int main()
{
	string S = "1729";
	checkDFA(S);

	return 0;
}
