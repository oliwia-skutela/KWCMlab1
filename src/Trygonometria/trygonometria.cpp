#include "trygonometria.h"
#define _USE_MATH_DEFINES
#include <cmath>

double degreemath::sin_degree(double degree){

	
	double radian = degree*M_PI/180.0;
	return std::sin(radian); 
}
double degreemath::cos_degree(double degree) {
	double radian = degree*M_PI/180.0;
	return std::cos(radian);
}

double degreemath::tg_degree(double degree) {
	double radian = degree*M_PI/180.0;
	return std::tan(radian);
}

double degreemath::ctg_degree(double degree) {
	double radian = degree*M_PI/180.0;
	double ctg=1/tan(radian);
	return ctg;
	/*...*/}


