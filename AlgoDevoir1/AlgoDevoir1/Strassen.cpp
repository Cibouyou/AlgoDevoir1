//
//  Strassen.cpp
//  AlgoDevoir1
//

#include "matrix.h"
#include "Strassen.h"
#include <iostream>

using namespace std;

Strassen::Strassen(Matrix _A) {

	this->size = _A.size;
	this->tab = _A.tab;

	A.tab = new int*[A.size];
	for (int i = 0; i < A.size; ++i)
		A.tab[i] = new int[A.size];

}

void Strassen::print() {

	cout << endl;
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size; i++) {
			cout << this->tab[i][j] << " ";
		}
	}
	cout << endl;

}

Matrix Strassen::calculate(Matrix A, Matrix B) {

	int  i, j;
	int m1, m2, m3, m4, m5, m6, m7;
	Matrix C(int tab[2][2],2);

	m1 = (A.tab[0][0] + A.tab[1][1])*(B.tab[0][0] + B.tab[1][1]);
	m2 = (A.tab[1][0] + A.tab[1][1])*B.tab[0][0];
	m3 = A.tab[0][0] * (B.tab[0][1] - B.tab[1][1]);
	m4 = A.tab[1][1] * (B.tab[1][0] - B.tab[0][0]);
	m5 = (A.tab[0][0] + A.tab[0][1])*B.tab[1][1];
	m6 = (A.tab[1][0] - A.tab[0][0])*(B.tab[0][0] + B.tab[0][1]);
	m7 = (A.tab[0][1] - A.tab[1][1])*(B.tab[1][0] + B.tab[1][1]);

	C.tab[0][0] = m1 + m4 - m5 + m7;
	C.tab[0][1] = m3 + m5;
	C.tab[1][0] = m2 + m4;
	C.tab[1][1] = m1 - m2 + m3 + m6;
	cout << " ___________Methode Strassen_________" << endl;

	C.print();
}