#include<trygonometria.h>
#include<iostream>
int main() { 
	
	
double resultSin=degreemath::sin_degree(50.0);
	
double resultCos=degreemath::cos_degree(50.0);

double resultTan=degreemath::tg_degree(50.0);
	
double resultCtg=degreemath::ctg_degree(50.0);
	
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
