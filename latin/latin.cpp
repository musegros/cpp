#include <iostream>

using namespace std;

int main() {

    int order = 16;
    int initValue = 3;
    
    initValue -= 1;

    /*
    */

    for(int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            cout << hex << (j+initValue+i) % order << " ";
        }
        cout << "\n";
    }
}
