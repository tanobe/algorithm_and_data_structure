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

/**
 本当はc++で解いた方が良いが解説がcで書かれていてまたリングバッファの理解の為には
 cで書いた方が良さそうなので念の為、cでの回答を記載する。後で見直す。
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #define LEN 100005

 typedef struct pp{
     char name[100];
     int t;
 }P;

 P Q[LEN];
 int head,tail,n;

 void enqueue(P x)
 {
     Q[tail]=x;
     tail=(tail+1)%LEN;
 }

 P dequeue(){
     P x=Q[head];
     head=(head+1)%LEN;
     return x;
 }

 int min(int a,int b)
 {
     return a<b?a:b;
 }

 int main(int argc, const char * argv[]) {
     // insert code here...
     int elaps=0,c;
     int i,q;
     P u;
     scanf("%d %d",&n,&q);
     for(i=1;i<=n;i++)
     {
         scanf("%s",Q[i].name);
         scanf("%d",&Q[i].t);
     }
     head=1;
     tail=n+1;
     while(head!=tail)
     {
         u=dequeue();
         c=min(q,u.t);
         u.t-=c;
         elaps+=c;
         if(u.t>0)
             enqueue(u);
         else
         {
             printf("%s %d\n",u.name,elaps);
         }
     }
     return 0;
 }

 */
