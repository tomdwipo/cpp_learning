//
//  main.cpp
//  Swap
//
//  Created by Tommy-a on 03/09/22.
//

#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int temp = a;
    a = b;
    b = temp;
    
    std::cout << a << " " << b << std::endl;
    return 0;
}
