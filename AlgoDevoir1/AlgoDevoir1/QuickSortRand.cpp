//
//  QuickSortRand.cpp
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 20/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#include "QuickSortRand.h"
#include <iostream>

using namespace std;

QuickSortRand::QuickSortRand(int *_a, int _num) {
    this->a = _a;
    this->num = _num;
    
    srand((unsigned) time(0));
    
    sort(a, 0, num);
}

void QuickSortRand::print() {
    cout << endl << endl;
    for (int i = 0; i < this->num; i++) {
        cout << this->a[i] << " ";
    }
    cout << endl;
}

void QuickSortRand::sort(int *a, int left, int right) {
    int i = left, j = right;
    int tmp;
    
    /* Generating a random pivot */
    int pivot_index = left + (rand() % (int)(right - left + 1));
    int pivot = a[pivot_index];
    cout << pivot_index << " ";
    
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