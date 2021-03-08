#include <iostream>
#include <random>
#include <cctype>

using u32 = uint_least32_t;

using namespace std;

int main() {
		random_device os_seed;
		const u32 seed = os_seed();
		mt19937 generator( seed );
		uniform_int_distribution<u32> distribute(0,5);

		int dice[6] = { };
		int count = 100000;
		int roll;
		cout << "How many times do you want to roll?\n";
		//cin >> count;

		for (int i = 0; i < count; i++) {
				roll = distribute(generator);
				dice[roll]++;
		}
		
		for (int i = 0; i < 6; i++) {
				cout << i + 1 << " rolled " << dice[i] << " times.\n"; 
		}
}
				
