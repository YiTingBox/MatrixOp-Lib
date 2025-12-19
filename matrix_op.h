#ifndef MATRIX_OP_H
#define MATRIX_OP_H
#define SIZE 3

//Basic
void matrix_addition(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]);
void matrix_subtraction(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]);
void matrix_elementwise_multiplication(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]);

//Linear
void matrix_multiplication(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]);
void matrix_transpose(double mat[SIZE][SIZE],double trans[SIZE][SIZE]);

//Advanced
double matrix_det(double mat[SIZE][SIZE]);
void matrix_adj(double mat[SIZE][SIZE],double adj[SIZE][SIZE]);
void matrix_inverse(double mat[SIZE][SIZE],double inverse[SIZE][SIZE]);

//Print
void print_matrix(double mat[SIZE][SIZE]);

#endif

