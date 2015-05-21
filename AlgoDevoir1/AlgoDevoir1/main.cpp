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
#include "BubbleSort.h"
#include "QuickSort.h"
#include "QuickSortRand.h"
#include "Matrix.h"

#define SIZE 10

using namespace std;

int main(int argc, const char * argv[]) {
    
    int a[SIZE], b[SIZE];
    
    srand((unsigned) time(0));
    
    for(int i = 0; i < SIZE; i++) {
        a[i] = (rand() % 100) + 1;
        
        cout << a[i] << " ";
    }

	int input1[4][4] = {
			{ 13, 3, 6, 3 },
			{ 6, 2, 8, 87 },
			{ 37, 42, 57, 69 },
			{ 42, 53, 64, 74 } };

	int input2[4][4] = {
			{ 75, 68, 5, 4 },
			{ 64, 58, 47, 3 },
			{ 55, 48, 34, 2 },
			{ 45, 34, 27, 1 } };
    
    // cout << endl << "\nMerge Sorted Array" << endl;
    // MergeSort *sorter = new MergeSort(a, b, SIZE);
    // sorter->print();
    
    // cout << endl << "\nBubble Sorted Array" << endl;
    // BubbleSort *sorter = new BubbleSort(a, SIZE);
    // sorter->print();
    
    // cout << endl << "\nQuick Sorted Array" << endl;
    // QuickSort *sorter = new QuickSort(a, SIZE);
    // sorter->print();
    
    cout << endl << "\nQuick Sorted Randomized Array" << endl;
    QuickSortRand *sorter = new QuickSortRand(a, SIZE);
    sorter->print();

	Matrix inputM1(input1[0], 4);
	Matrix inputM2(input2[0], 4);
	cout << "Input A is:\n" << inputM1 << endl;
	cout << "Input B is:\n" << inputM2 << endl;
	Matrix result(4);
	result = inputM1 * inputM2;
	cout << "Result of A * B is:\n" << result << endl;
    
    return 0;
}
