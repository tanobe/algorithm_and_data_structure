//
//  Stack.cpp
//  algorithm_and_data_structure
//
//  Created by 田野辺開 on 2021/08/21.
//

#include<iostream>
#include<string>
#include <sstream>
#include<cstdlib>
using namespace std;
//#define rep(i,n) for(int i=0;i<n;i++


class Stack{
private:
    int inf[1000];
    int tp;
    
public:
    
    Stack(){
        tp = 0;
    }
    
    
    void push(int x){
        tp ++;
        inf[tp] = x;
    }
    
    void pop(){
        tp --;
    }
    
    int top(){
        int x = inf[tp];
        return x;
    }
    
    bool isempty(){
        if (tp == 0) return true;
        return false;
    }
    
    int size(){
        return tp;
    }
    
};




void Stack() {
    class Stack stack;
    string str,s[10000];
    int ind = 0,th = 0;
    
    stringstream ss{str};
    getline(cin, str);
    for(int i = 0; i < str.length() ;i++){
        
        if(str[i] == ' ') {
            th=0;
            ind++;
        } else {
            s[ind].insert(th,str.substr(i,1));
            th++;
        }
    }
    ind++;
    
    for(int i = 0  ;i<ind;i++){
        
        if(s[i] == "+" || s[i] == "*" || s[i] == "-")
        {
            
            int x2 = stack.top();
            stack.pop();
            int x1 = stack.top();
            stack.pop();
            if(s[i] == "+")
            {
                stack.push(x1+x2);
            }
            else if(s[i] == "-")
            {
                stack.push(x1-x2);
            }
            else if(s[i] == "*")
            {
                stack.push(x1*x2);
            }
        }
        else
        {
            if(s[i] == " ")continue;
            int n = atoi(s[i].c_str());
            stack.push(n);
        }
    }
    cout << stack.top() << endl;
    
    
}
