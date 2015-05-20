//
//  BubbleSort.h
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 20/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#ifndef __AlgoDevoir1__BubbleSort__
#define __AlgoDevoir1__BubbleSort__

#include <stdio.h>
#include <iostream>

class BubbleSort {
    
public:
    BubbleSort(int*, int);
    void print();
    
private:
    int *a;
    int num;
    void sort(int*, int);
    
};

#endif /* defined(__AlgoDevoir1__BubbleSort__) */
