#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main() {
    ifstream in("test");
    string s;
    vector<string> v;

    while(in >> s){
        v.push_back(s);
    }

    for(int i = 0; i < v.size(); i++) {
        cout << i+1 << " " << v[i] + "\n";
    }
}