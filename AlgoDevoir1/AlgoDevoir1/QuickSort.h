//
//  QuickSort.h
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 20/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#ifndef __AlgoDevoir1__QuickSort__
#define __AlgoDevoir1__QuickSort__

#include <stdio.h>

class QuickSort {
    
public:
    QuickSort(int*, int);
    void print();
    
private:
    int *a;
    int num;
    
    void sort(int*, int, int);
    
};

#endif /* defined(__AlgoDevoir1__QuickSort__) */
