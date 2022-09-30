//
//  main.cpp
//  char_string
//
//  Created by Tommy-a on 30/09/22.
//

#include <iostream>
using namespace std;
int main() {
    char ch = 'a';
    cout << ch << " -> " << +ch << endl;
    ch = 98;
    cout << ch << " -> " << +ch << endl;

    string name;
    cout << "what's your name? ";
    getline(cin, name);
    cout << "Hi, " << name << endl;
    return 0;
}
