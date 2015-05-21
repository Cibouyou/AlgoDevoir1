//
//  QuickSortRand.h
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 20/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#ifndef __AlgoDevoir1__QuickSortRand__
#define __AlgoDevoir1__QuickSortRand__

#include <stdio.h>

class QuickSortRand {
    
public:
    QuickSortRand(int*, int);
    void print();
    
private:
    int *a;
    int num;
    
    void sort(int*, int, int);
    int random_partition(int*, int, int);
    void swap(int*, int, int);
    
};

#endif /* defined(__AlgoDevoir1__QuickSortRand__) */
