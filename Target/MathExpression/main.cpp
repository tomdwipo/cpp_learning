//
//  main.cpp
//  MathExpression
//
//  Created by Tommy-a on 03/09/22.
//

#include <iostream>

int main(){
    int a = 1 + 2 ; // 3
    int b = 2 - 1 ; // 1
    int c = 1 / 1 ; // 1
    int d = 1 * 1 ; // 1
    int e = 3 % 2 ; // 1
    int f = a++ ; // f = 3, a = 4
    int g = ++b ; // g = 2, b = 2

    std::cout << f << " " << a << std::endl;
    std::cout << g << " " << b << std::endl;
    return 0;
}
