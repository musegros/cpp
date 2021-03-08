#include <iostream>

using namespace std;

int main () {
		cout << "Type characters:" << endl;
		while(char c = cin.get() != 'q') {
				cout << c << " wasn't it" << endl;
				if(char x = c == 'a' || c == 'b')
						cout << "You typed a or b" << endl;
				else
						cout << "You typed " << x << endl;
		}
}
