//
//  Queue.cpp
//  algorithm_and_data_structure
//
//  Created by 田野辺開 on 2021/08/23.
//

#include <iostream>
using namespace std;
#define SIZE 200000

struct Queue_data {
    int table[SIZE];
    int head, tail;
    
    
    void init () {
        head = tail = 0;
    }
    
    bool isEmpty() {
        return  head == tail;
    }
    
    void enqueue(int x) {
        table[tail] = x;
        tail ++;
//        tail %= SIZE;
        tail = (tail + 1) % SIZE;
    }
    
    int dequeue() {
        if (isEmpty()) {
            return 0;
        } else {
            int res = table[head];
            head ++;
//            head %= SIZE;
            head = (head + 1) % SIZE;
            return res;
        }
    }
};



void Queue() {
    Queue_data queue, queue2;
    int n, q, num;
    string table[SIZE];
    cin >> n >> q;
    queue.init();
    queue2.init();
    for (int i = 0; i < n ; i++) {
        cin >> table[i] >> num;
        queue.enqueue(num);
        queue2.enqueue(i);
    }
    
    int now = 0, A, B;
    while (!queue.isEmpty()) {
        A = queue.dequeue();
        B = queue2.dequeue();
        if (A <= q) {
            now += A;
            cout << table[B]<< ' ' << now << endl;
        } else {
            now += q;
            A -= q;
            queue.enqueue(A);
            queue2.enqueue(B);
        }
    }
}

