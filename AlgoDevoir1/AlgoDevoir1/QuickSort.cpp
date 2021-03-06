//
//  QuickSort.cpp
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 20/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#include "QuickSort.h"
#include <iostream>

using namespace std;

QuickSort::QuickSort(int *_a, int _num) {
    this->a = _a;
    this->num = _num;
    
    sort(a, 1, num);
}

void QuickSort::print() {
    cout << endl;
    for (int i = 0; i < this->num; i++) {
        cout << this->a[i] << " ";
    }
    cout << endl;
}

void QuickSort::sort(int *a, int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = a[(left + right) / 2];
    
    /* Partition */
    while (i <= j) {
        while (a[i] < pivot)
            i++;
        while (a[j] > pivot)
            j--;
        if (i <= j) {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    };
    
    /* Recursion */
    if (left < j)
        sort(a, left, j);
    if (i < right)
        sort(a, i, right);
    
}