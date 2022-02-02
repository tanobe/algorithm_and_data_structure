//
//  Test.cpp
//  algorithm_and_data_structure
//
//  Created by Kai Tanobe on 2021/10/26.
//

#include <iostream>
using namespace std;

void Test() {
    int m;
    int n;
    int k;
    int full;
    int sushi_left;
    int second_peopole;
    
    cin >> m >> n >> k;
    for (int i = 1; i << m; i++) {
        sushi_left = n - i * k;
        n = n -1;
        m = m - 1;
        if (sushi_left - m * k < 0) {
            
        }
    }
    cout << second_peopole << endl;
}
