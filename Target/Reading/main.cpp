//
//  main.cpp
//  Reading
//
//  Created by Tommy-a on 03/09/22.
//

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "kasih nilai a dan b: ";
    cin >> a;
    cin >> b;
    cout << a << " and " << b << endl;
    
    int c; cin >> c;
    int d[c];
    for(int i = 0; i<c; i++){
        cin >> d[i];
    }
    for(int i = c-1; i>0; i--){
        cout << d[i];
    }
    return 0;
}
