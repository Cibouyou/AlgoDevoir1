//
//  main.cpp
//  AlgoDevoir1
//
//  Created by Nathan Le Ray on 20/05/15.
//  Copyright (c) 2015 Nathan Le Ray. All rights reserved.
//

#include <iostream>
#include <climits>
#include <cstdlib>
#include <ctime>
#include "MergeSort.h"

#define SIZE 10

using namespace std;

int main(int argc, const char * argv[]) {
    
    int a[SIZE], b[SIZE];
    
    srand((unsigned) time(0));
    
    for(int i = 0; i < SIZE; i++){
        a[i] = (rand() % 100) + 1;
        
        cout << a[i] << " ";
    }
    
    cout << endl << "\nSorted Array" << endl;
    
    MergeSort *sorter = new MergeSort(a, b, SIZE);
    sorter->print();
    
    return 0;
}
