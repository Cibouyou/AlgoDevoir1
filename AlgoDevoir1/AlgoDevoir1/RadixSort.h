//
//  RadixSort.h
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 21/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#ifndef __AlgoDevoir1__RadixSort__
#define __AlgoDevoir1__RadixSort__

#include <stdio.h>

class RadixSort {
    
public:
    RadixSort(int*, int);
    void print();
    
private:
    int* a;
    int num;
    
    void sort(int*, int);
    int getMax(int*, int);
    void countSort(int*, int, int);
    
};

#endif /* defined(__AlgoDevoir1__RadixSort__) */
