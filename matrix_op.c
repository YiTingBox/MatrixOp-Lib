#include <stdio.h>
#include <stdlib.h>
#include "matrix_op.h"

//Basic
void matrix_addition(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]){
	int i,j;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
}

void matrix_subtraction(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]){
	int i,j;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			C[i][j]=A[i][j]-B[i][j];
		}
	}
}

void matrix_elementwise_multiplication(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]){
	int i,j;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			C[i][j]=A[i][j]*B[i][j];
		}
	}
}

//Linear
void matrix_multiplication(double A[SIZE][SIZE],double B[SIZE][SIZE],double C[SIZE][SIZE]){
	int i,j,k;
	double temp[SIZE][SIZE];
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			double sum=0;
			for(k=0;k<SIZE;k++){
				sum+=A[i][k]*B[k][j];
			}
			temp[i][j]=sum;
		}
	}
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			C[i][j]=temp[i][j];
		}
	}
}

void matrix_transpose(double mat[SIZE][SIZE],double trans[SIZE][SIZE]){
	int i,j;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			trans[i][j]=mat[j][i];
		}
	}
}

//Advanced
double matrix_det(double mat[SIZE][SIZE]){
	double pos=mat[0][0]*mat[1][1]*mat[2][2]+mat[0][1]*mat[1][2]*mat[2][0]+mat[0][2]*mat[1][0]*mat[2][1];
	double neg=mat[0][2]*mat[1][1]*mat[2][0]+mat[0][0]*mat[1][2]*mat[2][1]+mat[0][1]*mat[1][0]*mat[2][2];
	return pos-neg;
}

void matrix_adj(double mat[SIZE][SIZE],double adj[SIZE][SIZE]){
	double sub[2][2];
	int i,j,row,col;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			int sub_i=0;
			for(row=0;row<SIZE;row++){
				if(row==i) continue;
				int sub_j=0;
				for(col=0;col<SIZE;col++){
					if(col==j) continue;
					sub[sub_i][sub_j]=mat[row][col];
					sub_j++;
				}
				sub_i++;
			}
			double minor_det=sub[0][0]*sub[1][1]-sub[0][1]*sub[1][0];
			double sign;
			if((i+j)%2==0){
				sign=1;
			}
			else{
				sign=-1;
			}
			adj[j][i]=sign*minor_det;
		}
	}
}

void matrix_inverse(double mat[SIZE][SIZE],double inverse[SIZE][SIZE]){
	int i,j;
	double det=matrix_det(mat);
	double abs_det=det;
	if(det<0){
		abs_det=-det;
	}
	if(abs_det<1e-9){
		printf("Matrix is singular,no inverse.\n");
		return;
	}
	double adj[SIZE][SIZE];
	matrix_adj(mat,adj);
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			inverse[i][j]=adj[i][j]/det;
		}
	}
}

//Print
void print_matrix(double mat[SIZE][SIZE]){
	int i,j;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("%7.2f ",mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
