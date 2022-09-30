//
//  main.cpp
//  formatting_output
//
//  Created by Tommy-a on 30/09/22.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << left << setw(10) << "column 1" << setw(10) << "column 2" << endl;
    short n = 15;
    for(int i = 0; i < n; i++) {
        cout << right << setw(n-i) << "*" << endl;
    }
    float number = 10.12345;
    cout << setprecision(3)  << number << endl;
    cout << fixed  << number << endl;
    cout << fixed << setprecision(3)  << number << endl;

    cout << left  << setw(n) << "Course" << setw(n) << "Students" << endl
    << left  << setw(n) << "C++"    << setw(n) << right << "100" << endl
    << left  << setw(n) << "Javascript"  << setw(n) << right << "50" << endl;

    return 0;
}
