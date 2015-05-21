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
#include <vector>
#include <time.h>
#include "MergeSort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "QuickSortRand.h"
#include "InsertionSort.h"
#include "HeapSort.h"
#include "RadixSort.h"
#include "Matrix.h"

#define SIZE 100

using namespace std;

void fill_array(int *a, int *b, int size) {
    for(int i = 0; i < size; i++) {
        a[i] = (rand() % 100) + 1;

        // cout << a[i] << " ";
    }

    b = a;
}

int main(int argc, const char * argv[]) {

    int times[10][10];
    int dim = 0;

    int a1[SIZE], a2[2 * SIZE], a3[3 * SIZE], a4[4 * SIZE], a5[5 * SIZE];
    int a6[6 * SIZE], a7[7 * SIZE], a8[8 * SIZE], a9[9 * SIZE], a10[10 * SIZE];

    int b1[SIZE], b2[2 * SIZE], b3[3 * SIZE], b4[4 * SIZE], b5[5 * SIZE];
    int b6[6 * SIZE], b7[7 * SIZE], b8[8 * SIZE], b9[9 * SIZE], b10[10 * SIZE];

    clock_t t;

    srand((unsigned) time(0));

    fill_array(a1, b1, 1 * SIZE);
    fill_array(a2, b2, 2 * SIZE);
    fill_array(a3, b3, 3 * SIZE);
    fill_array(a4, b4, 4 * SIZE);
    fill_array(a5, b5, 5 * SIZE);
    fill_array(a6, b6, 6 * SIZE);
    fill_array(a7, b7, 7 * SIZE);
    fill_array(a8, b8, 8 * SIZE);
    fill_array(a9, b9, 9 * SIZE);
    fill_array(a10, b10, 10 * SIZE);


    cout << "Choisissez la dimension des matrices :" << endl;
    cin >> dim ;

     Matrix m1(dim);
     Matrix m2(dim);
     cout << "Matrice A :\n" << m1 << endl;
     cout << "Matrice B :\n" << m2 << endl;
     Matrix result(4);
     result = m1.strassen(m2);
     cout << "Strassen de A * B:\n" << result << endl;


    // cout << endl << "\nMerge Sorted Array" << endl;
    // MergeSort *sorter = new MergeSort(a, b, SIZE);
    // sorter->print();

    // cout << endl << "\nBubble Sorted Array" << endl;
    // BubbleSort *sorter = new BubbleSort(a, SIZE);
    // sorter->print();

    // cout << endl << "\nQuick Sorted Array" << endl;
    // QuickSort *sorter = new QuickSort(a, SIZE);
    // sorter->print();

    // This one doesn't always work, I can't figure out the reason.
    // cout << endl << "\nQuick Sorted Randomized Array" << endl;
    // QuickSortRand *sorter = new QuickSortRand(a, SIZE);
    // sorter->print();

    // cout << endl << "\nInsertion Sorted Array" << endl;
    // InsertionSort *sorter = new InsertionSort(a, SIZE);
    // sorter->print();

    // cout << endl << "\nHeap Sorted Array" << endl;
    // HeapSort *sorter = new HeapSort(a, SIZE);
    // sorter->print();

    // cout << endl << "\nRadix Sorted Array" << endl;
    // RadixSort *sorter = new RadixSort(a, SIZE);
    // sorter->print();
    system("pause");

    return 0;
}
