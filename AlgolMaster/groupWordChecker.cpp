//
//  main.cpp
//  AlgolMaster
//
//  Created by 신예지 on 17/03/2019.
//  Copyright © 2019 신예지. All rights reserved.
//

#include <iostream>
#include <string>
#define MAX 100
using namespace std;

int main(){
    int n;
    int groupWordCnt = 0;
    
    cin >> n;
    string* str = new string[n];
    
    for(int i=0; i<n; i++)
        cin >> str[i];
    
    string temp;
    char word[MAX];
    int wordIdx;
    int groupWordFlag;
    
    for(int i=0; i<n; i++) {
        word[MAX] = {'0'};
        wordIdx = 0;
        groupWordFlag = 0;
        
        temp = str[i];
        word[wordIdx++] = temp[0];
        
        for(int j=1; j<temp.length()-1; j++){
            if(temp[j] == temp[j-1]) {
                j++;
            }
            
            for(int k=0; k<wordIdx; k++){
                if(temp[j] == word[k]) {
                    groupWordFlag = 1;
                    break;
                }
                else {
                    word[wordIdx++] = temp[j];
                }
            }
        }
        
        if(groupWordFlag == 0)
            groupWordCnt++;
    }
    
    cout << groupWordCnt << endl;
}
