//
//  main.cpp
//  type_limit
//
//  Created by Tommy-a on 30/09/22.
//

#include <iostream>

using namespace std;

int main() {
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << numeric_limits<short>::min() << " <-> " << numeric_limits<short>::max() << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << numeric_limits<int>::min() << " <-> " << numeric_limits<int>::max() << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << numeric_limits<long>::min() << " <-> " << numeric_limits<long>::max() << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << numeric_limits<double>::min() << " <-> " << numeric_limits<double>::max() << endl;
    return 0;
}
