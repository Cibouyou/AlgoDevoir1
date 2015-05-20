//
//  BubbleSort.cpp
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 20/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#include "BubbleSort.h"
#include <iostream>

using namespace std;

BubbleSort::BubbleSort(int *_a, int _num) {
    
    this->a = _a;
    this->num = _num;
    
    sort(_a, _num);
    
}

void BubbleSort::print() {
    
    cout << endl;
    for (int i = 0; i < this->num; i++) {
        cout << this->a[i] << " ";
    }
    cout << endl;
    
}

void BubbleSort::sort(int *a, int num) {
    int temp;
    
    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num - i - 1; j++) {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}