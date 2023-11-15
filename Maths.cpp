#include "Maths.h"

matrix::matrix()
{

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3;j++) {
			mat[i][j] = 0;
		}
	}
}
std::array<std::array<double,3>,3> matrix::Add(matrix with_mat) {
	std::array<std::array<double,3>,3> mat_res;
	for (int i = 0; i < 3;i++) {
		for (int j = 0; j < 3; j++) {
			mat_res[i][j] = mat[i][j] + with_mat.mat[i][j];
		}
	}
	return mat_res;
}
std::array<std::array<double, 3>, 3> matrix::Multiply(matrix with_mat) {
	std::array<std::array<double, 3>, 3> mat_res;
	double sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3;j++) {
			for (int k = 0; k < 3; k++) {
				sum += mat[i][k] * with_mat.mat[k][j];
			}
			mat_res[i][j] = sum;
			sum = 0;
		}
	}
	return mat_res;
}
void matrix::SetMatrix(double a11, double a12, double a13, double a21, double a22, double a23, double a31, double a32, double a33)
{
	mat[0][0] = a11;
	mat[0][1] = a12;
	mat[0][2] = a13;
	mat[1][0] = a21;
	mat[1][1] = a22;
	mat[1][2] = a23;
	mat[2][0] = a31;
	mat[2][1] = a32;
	mat[2][2] = a33;

}




void ShowMatrix(std::array<std::array<double,3>,3> mat_to_show) {
	for (int i = 0; i < 3;i++) {
		for (int j = 0; j < 3;j++) {
			printf("%lf \t",mat_to_show[i][j]);
		}
		printf("\n");
	}
}
void ShowMatrix(double mat_to_show[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%lf \t", mat_to_show[i][j]);
		}
		printf("\n");
	}
}

void ShowMatrix(matrix mat) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << mat.mat[i][j];
			printf("\t");
		}
		printf("\n");
	}
}