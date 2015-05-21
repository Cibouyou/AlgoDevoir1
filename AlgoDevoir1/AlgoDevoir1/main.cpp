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

void reset_array(int *a, int *b, int size) {
    
    for(int i = 0; i < size; i++) {
        a[i] = b[i];
    }
    
}

void fill_array(int *a, int *b, int *c, int size) {
    for(int i = 0; i < size; i++) {
        a[i] = (rand() % 100) + 1;

        // cout << a[i] << " ";
    }
    
    reset_array(b, a, size);
    reset_array(c, a, size);
}

int main(int argc, const char * argv[]) {

    float times[10][10];
    int dim = 0;

    clock_t t;

    srand((unsigned) time(0));

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
    
    for (int i = 1; i <= 10; i++) {
            
        int a[i * SIZE], b[i * SIZE], c[i * SIZE];
        int j = 0;
        fill_array(a, b, c, i * SIZE);
        
        t = clock();
        MergeSort *sorter1 = new MergeSort(a, c, i * SIZE);
        t = clock() - t;
        times[i - 1][j] = ((float) t ) / CLOCKS_PER_SEC;
        j++;
        free(sorter1);
        reset_array(b, a, i * SIZE);
        
        t = clock();
        BubbleSort *sorter2 = new BubbleSort(a, i * SIZE);
        t = clock() - t;
        times[i - 1][j] = ((float) t ) / CLOCKS_PER_SEC;
        j++;
        free(sorter2);
        reset_array(b, a, i * SIZE);
        
        t = clock();
        QuickSort *sorter3 = new QuickSort(a, i * SIZE);
        t = clock() - t;
        times[i - 1][j] = ((float) t ) / CLOCKS_PER_SEC;
        j++;
        free(sorter3);
        reset_array(b, a, i * SIZE);
        
        // This one doesn't always work, I can't figure out the reason.
        t = clock();
        // QuickSortRand *sorter4 = new QuickSortRand(a, i * SIZE);
        t = clock() - t;
        times[i - 1][j] = ((float) t ) / CLOCKS_PER_SEC;
        j++;
        // free(sorter4);
        // reset_array(b, a, i * SIZE);
        
        t = clock();
        InsertionSort *sorter4 = new InsertionSort(a, i * SIZE);
        t = clock() - t;
        times[i - 1][j] = ((float) t ) / CLOCKS_PER_SEC;
        j++;
        free(sorter4);
        reset_array(b, a, i * SIZE);
        
        t = clock();
        HeapSort *sorter5 = new HeapSort(a, i * SIZE);
        t = clock() - t;
        times[i - 1][j] = ((float) t ) / CLOCKS_PER_SEC;
        j++;
        free(sorter5);
        reset_array(b, a, i * SIZE);
        
        t = clock();
        RadixSort *sorter6 = new RadixSort(a, i * SIZE);
        t = clock() - t;
        times[i - 1][j] = ((float) t ) / CLOCKS_PER_SEC;
        j++;
        free(sorter6);
        reset_array(b, a, i * SIZE);
        
        t = clock();
        sort(a, (a + (i * SIZE)));
        t = clock() - t;
        times[i - 1][j] = ((float) t ) / CLOCKS_PER_SEC;
        j++;
        reset_array(b, a, i * SIZE);
        
        t = clock();
        sort_heap(a, (a + (i * SIZE)));
        t = clock() - t;
        times[i - 1][j] = ((float) t ) / CLOCKS_PER_SEC;
        j++;
        reset_array(b, a, i * SIZE);
        
        t = clock();
        stable_sort(a, (a + (i * SIZE)));
        t = clock() - t;
        times[i - 1][j] = ((float) t ) / CLOCKS_PER_SEC;
        j++;
        reset_array(b, a, i * SIZE);
        
    }
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            
            printf("%f ", times[i][j]);
            
        }
        
        cout << endl << endl;
        
    }


    cout << "Choisissez la dimension des matrices :" << endl;
    cin >> dim ;

     Matrix m1(dim);
     Matrix m2(dim);
     cout << "Matrice A :\n" << m1 << endl;
     cout << "Matrice B :\n" << m2 << endl;
     Matrix result(4);
     result = m1.strassen(m2);
     cout << "Strassen de A * B:\n" << result << endl;

    system("pause");

    return 0;
}
