//
//  Binary_Search.cpp
//  algorithm_and_data_structure
//
//  Created by 田野辺開 on 2021/09/02.
//

#include <iostream>
using namespace std;

int Binary_Search_algorithm (int key, int n, int n_array[]) {
    int left = 0;
    int right = n;
    int mid;
    
    while ( left < right ) {
        mid = (left + right) / 2;
        if (key == n_array[mid]) {
            return  1;
        }
        if ( key > n_array[mid] ) {
            left = mid + 1;
        } else if ( key < n_array[mid] ) {
            right = mid;
        }
    }
    return 0;
}


void Binary_Search () {
    int n, n_array[10000], q, k, count_sum = 0;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> n_array[i];
    }
    
    cin >> q;
    for (int i = 0; i < q; i ++) {
        cin >> k;
        if ( Binary_Search_algorithm(k, n, n_array) ) {
            count_sum ++;
        }
    }

    cout << count_sum << endl;
}
