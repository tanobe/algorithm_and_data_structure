//
//  Stable_Sort.cpp
//  algorithm_and_data_structure
//
//  Created by 田野辺開 on 2021/08/12.
//

#include<iostream>
using namespace std;

struct Card{
    char suit, value;
};

void bubble_sort(struct Card A[], int N) {
    for (int i = 0; i < N; i ++) {
        for (int j = N -1; j >= i + 1; j --) {
            if (A[j].value < A[j - 1].value) {
                Card t = A[j];
                A[j] = A[j - 1];
                A[j - 1] = t;
            }
        }
    }
}


void seliction_sort(struct Card A[], int N) {
    for (int i = 0; i < N; i ++) {
        int minij = i;
        for (int j = i; j < N; j ++) {
            if (A[j].value < A[minij].value) {
                minij = j;
            }
        }
        Card t = A[i];
        A[i] = A[minij];
        A[minij] = t;
    }
}


void print(struct Card A[],int N) {
    for (int i = 0; i < N; i ++) {
        if (i > 0) {
            cout << " ";
        }
        cout << A[i].suit << A[i].value;
    }
    cout << endl;
}

bool isStable(struct Card C1[], struct Card C2[], int N) {
    for (int i = 0; i < N; i ++) {
        if (C1[i].suit != C2[i].suit) {
            return  false;
        }
    }
    return true;
}


void Stable_Sort() {
    Card C1[100], C2[100];
    
    int N;
    char ch;

    cin >> N;
    for (int i = 0; i < N; i ++) {
        cin >> C1[i].suit >> C1[i].value;
    }
    
    for (int i = 0 ; i < N; i ++) {
        C2[i] = C1[i];
    }
    
    bubble_sort(C1, N);
    seliction_sort(C2, N);
    
    print(C1, N);
    cout << "Stable" << endl;
    print(C2, N);
    if (isStable(C1, C2, N)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
}
