#include <stdio.h>
#include <stdlib.h>
#include "matrix_op.h"

int i,j,k;

void matrix_addition(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]){
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
}
void matrix_subtraction(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]){
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			C[i][j]=A[i][j]-B[i][j];
		}
	}
}

void matrix_elementwise_multiplication(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]){
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			C[i][j]=A[i][j]*B[i][j];
		}
	}
}

void matrix_multiplication(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]){
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			C[i][j]=0;
			for(k=0;k<SIZE;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
}

void matrix_transpose(double mat[SIZE][SIZE],double trans[SIZE][SIZE]){
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			trans[i][j]=mat[j][i];
		}
	}
}

void print_matrix(double mat[SIZE][SIZE]){
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("%7.2f ",mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
