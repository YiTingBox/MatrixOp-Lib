#ifndef MATRIX_OP_H
#define MATRIX_OP_H
#define SIZE 3

void matrix_addition(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]);
void matrix_subtraction(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]);
void matrix_elementwise_multiplication(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]);

void matrix_multiplication(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]);
void matrix_transpose(double mat[SIZE][SIZE],double trans[SIZE][SIZE]);

void print_matrix(double mat[SIZE][SIZE]);

#endif
