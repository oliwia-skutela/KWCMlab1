
#include<LaborkaConfig.h>
#ifdef USE_TRIGONOMETRY_DEGREE
#include<trygonometria.h>
#else
#define _USE_MATH_DEFINES
#include<cmath>
#endif

#include<iostream>
int main() { 
	
#ifdef USE_TRIGONOMETRY_DEGREE
double resultSin=degreemath::sin_degree(45.0);
	
double resultCos=degreemath::cos_degree(45.0);

double resultTan=degreemath::tg_degree(45.0);
	
double resultCtg=degreemath::ctg_degree(45.0);
#else
double resultSin=sin(M_PI/4.0);
	
double resultCos=cos(M_PI/4.0);

double resultTan=tan(M_PI/4.0);
	
double resultCtg=1/(tan(M_PI/4.0));

#endif

	
/*...*/ //

std::cout<<"Sinus"<<std::endl;
std::cout<<resultSin<<std::endl;
std::cout<<"Cosinus"<<std::endl;
std::cout<<resultCos<<std::endl;
std::cout<<"Tangens"<<std::endl;
std::cout<<resultTan<<std::endl;
std::cout<<"Cotangens"<<std::endl;
std::cout<<resultCtg<<std::endl;

return 0; 

}
