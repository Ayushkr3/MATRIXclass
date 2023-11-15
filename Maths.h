#pragma once
#include <stdio.h>
#include<array>
#include<iostream>
class matrix {
private:
public:
	double mat[3][3];
public:
	double T[3][3];
	matrix();
	std::array<std::array<double,3>,3> Add(matrix with_mat);
	std::array<std::array<double, 3>, 3> Multiply(matrix with_mat);
	void SetMatrix(double a11,double a12,double a13,double a21, double a22, double a23, double a31,double a32,double a33);
};

void ShowMatrix(std::array<std::array<double, 3>, 3> mat_to_show);
void ShowMatrix(double mat_to_show[3][3]);
void ShowMatrix(matrix mat);