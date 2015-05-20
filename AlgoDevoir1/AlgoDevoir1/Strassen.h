//
//  Matrix.h
//  AlgoDevoir1
//

#ifndef __AlgoDevoir1__Strassen__
#define __AlgoDevoir1__Strassen__

#include <stdio.h>
#include <iostream>
#include "matrix.h"

class Strassen {

public:
	Strassen(Matrix);
	void print();
	void calculate(Matrix, Matrix);

private:
	int **tab;
	int size;

};

#endif /* defined(__AlgoDevoir1__Strassen__) */