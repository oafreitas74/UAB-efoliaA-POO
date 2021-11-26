/*
 * Data.cpp
 *
 *  Created on: 04/05/2015
 *      Author: orlando
 */

#include "Data.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Data::Data() {
	this->dia = 0;
	this->mes = 0;
}
Data::Data(int dia, int mes){
	this->dia = dia;
	this->mes = mes;
}
Data::~Data() {
	// TODO Auto-generated destructor stub
}

int Data::getDia(){return dia; }
int Data::getMes(){return mes; }

int Data::Data::VerificarData(int &periodo){

	if(mes >= 10 && mes <= 12) periodo = 1;
	if(mes >= 1  && mes <= 3 ) periodo = 2;
	if(mes >= 4  && mes <= 6 ) periodo = 3;
	return periodo;
}
