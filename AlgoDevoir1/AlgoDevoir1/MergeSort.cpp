//
//  MergeSort.cpp
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 20/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#include <iostream>
#include <climits>
#include "MergeSort.h"

using namespace std;


MergeSort::MergeSort(int* _a, int* _b, int _num) {
    this->a = _a;
    this->b = _b;
    this->num = _num;
    merge_sort(_a, _b, 0, _num - 1);
}

void MergeSort::print() {
    cout << endl;
    for (int i = 0; i < this->num; i++) {
        cout << this->a[i] << " ";
    }
    cout << endl;
}

void MergeSort::merge(int *a, int *b, int start, int halfpoint, int end) {
    int h, i, j, k;
    h = start;
    i = start;
    j = halfpoint + 1;
    
    while ((h <= halfpoint) && (j <= end)) {
        if (a[h] <= a[j]) {
            b[i] = a[h];
            h++;
        } else {
            b[i] = a[j];
            j++;
        }
        i++;
    }
    if (h > halfpoint) {
        for (k = j; k <= end; k++) {
            b[i] = a[k];
            i++;
        }
    } else {
        for (k = h; k <= halfpoint; k++) {
            b[i] = a[k];
            i++;
        }
    }
    
    // Write the final sorted array to our original one
    for (k = start; k <= end; k++) {
        a[k] = b[k];
    }
}

void MergeSort::merge_sort(int *a, int*b, int start, int end) {
    int halfpoint;
    
    if (start < end) {
        halfpoint = (start + end) / 2;
        merge_sort(a, b, start, halfpoint);
        merge_sort(a, b, halfpoint + 1, end);
        merge(a, b, start, halfpoint, end);
    }
}
