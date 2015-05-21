//
//  Matrix.h
//  AlgoDevoir1
//

#ifndef MATRIX_H_
#define MATRIX_H_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "time.h"

class Matrix {
	size_t width;
	int *data;
public:
	Matrix(size_t _width) : width(_width) {

    int random = 0;
	srand(time(NULL));

		this->data = new int[_width * _width];

		for (size_t i = 0; i<width * width; ++i) {
            random =rand()%50;
			this->data[i] = random;
		}
	}


	Matrix(int *data, size_t _width) : Matrix(_width) {
		for (size_t i = 0; i<width * width; ++i) {
			this->data[i] = data[i];
		}
	}

	virtual ~Matrix() {
		if (this->data != NULL) {
			delete[] this->data;
			this->data = NULL;
		}
	}

	size_t get_width() const{
		return width;
	}
	Matrix & operator=(const Matrix & right);
	Matrix operator+(const Matrix & right) const;
	Matrix operator-(const Matrix & right) const;
	Matrix operator*(const Matrix & right) const;
	int & operator[](const size_t i);
	const int & operator[](const size_t i) const;

	Matrix strassen(const Matrix &b) const;
};

std::ostream & operator<<(std::ostream &os, Matrix &matrix);

#endif /* MATRIX_H_ */
