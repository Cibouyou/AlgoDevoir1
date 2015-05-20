//
//  MergeSort.h
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 20/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#ifndef __AlgoDevoir1__MergeSort__
#define __AlgoDevoir1__MergeSort__

#include <stdio.h>
#include <climits>

class MergeSort {
    
public:
    MergeSort(int*, int*, int);
    void print();
    
private:
    int *a, *b;
    int num;
    
    void merge(int*, int*, int, int, int);
    void merge_sort(int*, int*, int, int);
    
};

#endif /* defined(__AlgoDevoir1__MergeSort__) */
