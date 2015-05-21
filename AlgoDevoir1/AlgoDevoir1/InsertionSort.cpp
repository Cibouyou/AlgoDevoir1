//
//  InsertionSort.cpp
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 21/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#include "InsertionSort.h"
#include <iostream>

using namespace std;

InsertionSort::InsertionSort(int* _a, int _num) {

    this->a = _a;
    this->num = _num;
    sort(a, num);
    
}

void InsertionSort::print() {
    cout << endl << endl;
    for (int i = 0; i < this->num; i++) {
        cout << this->a[i] << " ";
    }
    cout << endl;
}

void InsertionSort::sort(int* a, int num) {
    int i, j ,tmp;
    
    for (i = 1; i < num; i++) {
        j = i;
        
        while (j > 0 && a[j - 1] > a[j]) {
            tmp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = tmp;
            j--;
        }
    }
}