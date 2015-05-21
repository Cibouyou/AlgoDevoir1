//
//  HeapSort.h
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 21/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#ifndef __AlgoDevoir1__HeapSort__
#define __AlgoDevoir1__HeapSort__

#include <stdio.h>

class HeapSort {
    
public:
    HeapSort(int*, unsigned int);
    void print();
    
private:
    int* a;
    unsigned int num;
    
    void sort(int*, unsigned int);
    
};

#endif /* defined(__AlgoDevoir1__HeapSort__) */
