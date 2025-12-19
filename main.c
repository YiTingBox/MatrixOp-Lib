#include <stdio.h>
#include <stdlib.h>
#include "matrix_op.h"

int main(){
	//initialization
	double A[3][3]={
		{1.0, 2.0, 3.0},
		{8.0, 9.0, 4.0},
		{7.0, 6.0, 5.0}
	};
	double B[3][3]={
		{1.0, 8.0, 7.0},
		{2.0, 9.0, 6.0},
		{3.0, 4.0, 5.0}
	};
	double add_result[3][3]; double sub_result[3][3]; double wise_result[3][3]; double mult_result[3][3];
	double trans_result[3][3]; double adj_result[3][3]; double inverse_result[3][3];
	
	//test the result of Addition
	printf("The result of A+B:\n");
	matrix_addition(A,B,add_result);
	print_matrix(add_result);
	
	//test the result of Subtraction
	printf("The result of A-B:\n");
	matrix_subtraction(A,B,sub_result);
	print_matrix(sub_result);
	
	//test the result of Element-wise Multiplication
	printf("The result of A°B (Element-wise Multiplication):\n");
	matrix_elementwise_multiplication(A,B,wise_result);
	print_matrix(wise_result);
	
	//test the result of Multiplication
	printf("The result of AB (Matrix Multiplication):\n");
	matrix_multiplication(A,B,mult_result);
	print_matrix(mult_result);
	
	//test the result of Transpose A
	printf("The result of Transpose A:\n");
	matrix_transpose(A,trans_result);
	print_matrix(trans_result);
	
	//test the value of determinant A
	printf("The value of a determinant A: %.2f\n\n",matrix_det(A));
	
	//test the adjoint of A
	printf("The adjoint of A:\n");
	matrix_adj(A,adj_result);
	print_matrix(adj_result);
	
	//test the inverse of A
	printf("The inverse of A:\n");
	matrix_inverse(A,inverse_result);
	print_matrix(inverse_result);
	
	return 0;
}
