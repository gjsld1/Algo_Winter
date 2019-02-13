//
//  1-2.cpp
//  2019_01_Algorithm
//
//  Created by 신예지 on 13/02/2019.
//  Copyright © 2019 신예지. All rights reserved.
//

#include <iostream>
using namespace std;

typedef int itemType;

class Stack1 {
private:
    itemType *stack;
    int p;
public:
    Stack1(int max=100) {
        stack = new itemType[max];
        p=0;
    }
    ~Stack1() {
        delete stack;
    }
    inline void push(itemType v) {
        stack[p++] = v;
    }
    inline itemType pop() {
        return stack[--p];
    }
    inline int empty() {
        return !p;
    }
};

int main() {
    char c;
    Stack1 acc(50);
    int x;  //입력 받은 수 하나를 임시 저장
    
    //후위 연산
    while((c=cin.get()) != '\n'){
        x=0;
        while(c==' ') cin.get(c);
        if(c=='+') x=acc.pop() + acc.pop();
        if(c=='*') x=acc.pop() * acc.pop();
        while(c>='0' && c<='9'){
            x= 10*x + (c-'0');
            cin.get(c);
        }
        acc.push(x);
    }
    cout<<acc.pop()<<'\n';
}
