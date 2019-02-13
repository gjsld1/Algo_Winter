//
//  1-1.cpp
//  2019_01_Algorithm
//
//  Created by 신예지 on 13/02/2019.
//  Copyright © 2019 신예지. All rights reserved.
//

#include <iostream>
using namespace std;

class InputNum {
public:
    InputNum() {
        cout<<"Enter number ";
        cin>>_num;
    }
    int GetValue() const {
        return _num;
    }
    void AddInput() {
        InputNum aNum;  //get a number from user;
        _num = _num + aNum.GetValue();
    }
private:
    int _num;
};

int main() {
    //클래스 생성시 num 입력받음
    InputNum num;
    cout<<"The value is "<<num.GetValue()<<"\n";
    
    //AddInput() 호출 시 InputNum 클래스 생성하여 num 입력 받아 원래의 값과 더해줌
    num.AddInput();
    cout<<"Now the value is "<<num.GetValue()<<"\n";
}
