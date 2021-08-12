//
//  Selection_Sort.cpp
//  algorithm_and_data_structure
//
//  Created by 田野辺開 on 2021/08/11.
//
//選択ソート
#include<iostream>
using namespace std;

void Selection_Sort_output(int count, int array[], int n) {
    for (int i = 0; i < n; i ++) {
        if (i > 0) {
            cout << " ";
        }
        cout << array[i];
    }
    cout << endl;
    cout << count << endl;
}

void Selection_Sort_algorithm(int array[], int n) {
    int minij, t, count = 0;
    for (int i = 0; i < n - 1; i ++) {
        minij = i;
        for (int j = i; j < n; j ++) {
            if (array[j] < array[minij]) {
                minij = j;
            }
        }
        t = array[i];
        array[i] = array[minij];
        array[minij] = t;
        if (i != minij) {
            count ++;
        }
        
        for (int i = 0; i < n; i ++) {
            if (i > 0) {
                cout << " ";
            }
            cout << array[i];
        }
        cout << endl;
        cout << count << endl;
    }
    Selection_Sort_output(count, array, n);
}



void Selection_Sort() {
    // ↓ 入力された行を配列に入れる
    int n;
    cin >> n;
    int array[100];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    Selection_Sort_algorithm(array, n);
}
