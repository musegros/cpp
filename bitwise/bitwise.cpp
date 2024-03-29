#include "printBinary.h"
#include <iostream>

unsigned char rol(unsigned char);
unsigned char ror(unsigned char);

using namespace std;

#define PR(STR, EXPR) \
	cout << STR; printBinary(EXPR); cout << endl;

int main() {
	unsigned int getval;
	unsigned char a, b;
	cout << "Enter a number between 0 and 255: ";
	cin >> getval; a = getval;
	PR("a in binary: ", a);
	cout << "Enter a number between 0 and 255: ";
	cin >> getval; b = getval;
	PR("b in binary: ", b);
	PR("a | b = ", a | b);
	PR("a & b = ", a & b);
	PR("a ^ b = ", a ^ b);
	PR("~a = ", ~a);
	PR("~b = ", ~b);
	PR("a before rotate = ", a);
	PR("b before rotate = ", b);
	PR("ror(a) = ", ror(a));
	PR("rol(b) = ", rol(b));
	unsigned char c = 0x5A;
	PR("c in binary: ", c);
	a |= c;
	PR("a |= c; a = ", a);
	b &= c;
	PR("b &= c; b = ", b);
	b ^= a;
	PR("b ^= a; b = ", b);
}
