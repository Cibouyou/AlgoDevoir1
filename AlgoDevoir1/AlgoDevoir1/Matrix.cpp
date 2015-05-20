//
//  Matrix.cpp
//  AlgoDevoir1
//

#include "matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix(int **_tab, int _size) {

	this->tab = _tab;
	this->size = _size;

	tab = new int*[size];
	for (int i = 0; i < size; ++i)
		tab[i] = new int[size];

}

void Matrix::print() {

	cout << endl;
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size; i++) {
			cout << this->tab[i][j] << " ";
		}
	}
	cout << endl;

}

void Matrix::fill(int **tab, int size) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
		  
			cout << "tab[" << i << "][" << j << "] : ";
			cin >> tab[i][j];
		}
	}
}