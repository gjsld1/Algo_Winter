//
//  main.cpp
//  Algo_Winter
//
//  Created by 신예지 on 30/12/2018.
//  Copyright © 2018 신예지. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;  //연결된 고리의 갯수
    int group;  //분리된 후 고리 그룹의 갯수
    int array[50];
    for(int i=0; i<50; i++){
        array[i]=pow(2,i);
    }
    
    cout<<"고리의 개수 양의 정수 n (3<=n<=10^18) : ";
    cin >> n;
    
    for(int i=0; i<50; i++){
        if(array[i]<=n && n<array[i+1]){
            group=i+1;
            break;
        }
    }
    
    cout<<"풀어야 할 고리의 최소 개수 : " << group/2 << endl;
}
