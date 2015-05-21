//
//  InsertionSort.h
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 21/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#ifndef __AlgoDevoir1__InsertionSort__
#define __AlgoDevoir1__InsertionSort__

#include <stdio.h>

class InsertionSort {
    
public:
    InsertionSort(int*, int);
    void print();
    
private:
    int *a;
    int num;
    
    void sort(int* a, int num);
    
};

#endif /* defined(__AlgoDevoir1__InsertionSort__) */
