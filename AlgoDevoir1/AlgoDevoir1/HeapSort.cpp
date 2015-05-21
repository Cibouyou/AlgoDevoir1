//
//  HeapSort.cpp
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 21/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#include "HeapSort.h"
#include <iostream>

using namespace std;

HeapSort::HeapSort(int *_a, unsigned int _num) {
    this->a = _a;
    this->num = _num;
    
    sort(a, num);
}

void HeapSort::print() {
    cout << endl << endl;
    for (int i = 0; i < this->num; i++) {
        cout << this->a[i] << " ";
    }
    cout << endl;
}

void HeapSort::sort(int* a, unsigned int num)
{
    unsigned int i = num / 2, parent, child;
    int t;
    
    for (;;) {
        if (i > 0) {
            i--;
            t = a[i];
        }
        else {
            num--;
            if (num == 0) return;
            t = a[num];
            a[num] = a[0];
        }
        
        parent = i;
        child = i * 2 + 1;
        
        while (child < num) {
            if (child + 1 < num  &&  a[child + 1] > a[child]) {
                child++;
            }
            if (a[child] > t) {
                a[parent] = a[child];
                parent = child;
                child = parent * 2 + 1;
            }
            else {
                break;
            }
        }
        a[parent] = t;
    }  
}