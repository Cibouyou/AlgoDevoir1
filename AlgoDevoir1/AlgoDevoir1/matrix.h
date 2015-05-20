//
//  Matrix.h
//  AlgoDevoir1
//

#ifndef __AlgoDevoir1__Matrix__
#define __AlgoDevoir1__Matrix__

#include <stdio.h>
#include <iostream>

class Matrix {

public:
	Matrix(int**, int);
	void print();

private:
	int **tab;
	int size;
	void fill(int**, int);

};

#endif /* defined(__AlgoDevoir1__Matrix__) */