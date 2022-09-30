//
//  main.cpp
//  random_number
//
//  Created by Tommy-a on 30/09/22.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    const short maxValue = 6;
    const short minValue = 1;
    srand(time(nullptr)); // from 1 january 1970
    short firstDiceValue = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << firstDiceValue << endl;
    return 0;
    
}
