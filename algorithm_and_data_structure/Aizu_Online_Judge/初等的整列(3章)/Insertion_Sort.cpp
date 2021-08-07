//
//  Insertion_Sort.cpp
//  algorithm_and_data_structure
//
//  Created by 田野辺開 on 2021/08/07.
//

//挿入ソート
//
#include<iostream>
using namespace std;

void output(int array[], int n) {
    for (int i = 0; i < n; i ++) {
        if (i > 0) {
            cout << " ";
        }
        cout << array[i];
    }
    cout << endl;
}


void Insertion_Sort_algorithm(int array[], int n) {
    int v, j;
    
    for (int i = 1; i < n; i++) {
        v = array[i];
        j = i - 1;
        
        while (j >= 0 && array[j] > v) {
            array[j + 1]  = array[j];
            j --;
        }
        
        array[j + 1] = v;
        output(array, n);
    }
}


void Insertion_Sort() {
    // ↓ 入力された行を配列に入れる
    int n;
    cin >> n;
    int array[100];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    output(array, n);
    Insertion_Sort_algorithm(array, n);
}


