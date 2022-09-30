//
//  main.cpp
//  variable_size
//
//  Created by Tommy-a on 29/09/22.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cout << "add : " << endl;
    int n, q, t;
    cin >> n >> q;
    vector<vector<int>> v;
    
    for(int i=0; i<n; i++){
        cin >> t;
        vector<int> vt;
        vt.assign(t, 0);
        for(int j=0; j<t; j++){
            cin >> vt[j];
        }
        v.push_back(vt);
    }
    
    
    vector<pair<int, int>>k;
    int first, second;
    for(int i=0; i<q; i++){
        cin >> first >> second;
        k.push_back({first, second});
    }
    
    for(int i=0; i<q; i++){
        cout << v[k[i].first][k[i].second] << endl;
    }
    return 0;
}
