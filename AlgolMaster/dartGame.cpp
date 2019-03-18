//
//  dartGame.cpp
//  AlgolMaster
//
//  Created by 신예지 on 19/03/2019.
//  Copyright © 2019 신예지. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int sum;
    
    string dartResult;
    cin >> dartResult;
    
    int score[3];
    int scoreIdx = 0;
    
    char bonus[3];
    int bonusIdx = 0;
    
    char option[3] = {'.'};
    int optionIdx = 0;
    
    for(int i=0; i<dartResult.length(); i++){
        if(dartResult[i] >=48 && dartResult[i] <= 57){
            score[scoreIdx++] = dartResult[i]-48;
            if(dartResult[i+1] >=48 && dartResult[i+1] <= 57) {
                score[scoreIdx-1] = 10;
                i++;
            }
        }
        
        else if(dartResult[i] == 'S' || dartResult[i] == 'D' || dartResult[i] == 'T') {
            bonus[bonusIdx++] = dartResult[i];
            if(dartResult[i+1] == '*' || dartResult[i+1] == '#') {
                option[optionIdx++] = dartResult[i+1];
                i++;
            }
            else
                optionIdx++;
        }
    }
    
    for(int i=0; i<3; i++) {
        switch(bonus[i]) {
            case 'S':
                score[i] = score[i];
                break;
            case 'D':
                score[i] = pow(score[i],2);
                break;
            case 'T':
                score[i] = pow(score[i],3);
                break;
        }
    }
    
    for(int i=0; i<3; i++) {
        switch (option[i]) {
            case '#':
                score[i] *= (-1);
                break;
            case '*':
                if(i == 0){
                    score[i] *= 2;
                }
                else {
                    score[i] *= 2;
                    score[i-1] *= 2;
                }
        }
    }
    
    sum = score[0] + score[1] + score[2];
    cout << sum << endl;
}
