//
//  QuickSortRand.cpp
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 20/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#include "QuickSortRand.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

QuickSortRand::QuickSortRand(int *_a, int _num) {
    this->a = _a;
    this->num = _num;
    
    sort(a, 0, num);
}

void QuickSortRand::print() {
    cout << endl << endl;
    for (int i = 0; i < this->num; i++) {
        cout << this->a[i] << " ";
    }
    cout << endl;
}

void QuickSortRand::sort(int *a, int first, int last) {
    int q;
    if (first < last)
    {
        q = random_partition(a, first, last);
        sort(a, first, q - 1);
        sort(a, q + 1, last);
    }
}

int QuickSortRand::random_partition(int *a, int first, int last) {
    int pivot_loc;
    
    srand((unsigned) time(0));
    
    pivot_loc = first + rand() % (last - first + 1);
    
    int pivot = a[pivot_loc];
    
    swap(a, pivot_loc, last);
    pivot_loc = last;
    
    int i = first - 1;
    
    for(int j = first; j <= last - 1; j++) {
        if(a[j] <= pivot) {
            i++;
            swap(a, i, j);
        }
    }
    
    swap(a, i + 1, pivot_loc);

    return i + 1;
}

void QuickSortRand::swap(int *a, int i, int j) {
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}