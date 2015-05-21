//
//  RadixSort.cpp
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 21/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#include "RadixSort.h"
#include <iostream>

using namespace std;

RadixSort::RadixSort(int *_a, int _num) {
 
    this->a = _a;
    this->num = _num;
    
    sort(_a, _num);
    
}

void RadixSort::print() {
    cout << endl << endl;
    for (int i = 0; i < this->num; i++) {
        cout << this->a[i] << " ";
    }
    cout << endl;
}

int RadixSort::getMax(int *a, int num) {
    int max = a[0];
    for (int i = 1; i < num; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}

void RadixSort::countSort(int *a, int num, int exp) {
    int output[num];
    int i, count[10] = {0};
    
    for (i = 0; i < num; i++)
        count[(a[i] / exp) % 10]++;
    
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    
    for (i = num - 1; i >= 0; i--) {
        output[count[(a[i] / exp) % 10] - 1] = a[i];
        count[(a[i] / exp) % 10]--;
    }
    
    for (i = 0; i < num; i++)
        a[i] = output[i];
}

void RadixSort::sort(int *a, int num) {
    int m = getMax(a, num);
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(a, num, exp);
}