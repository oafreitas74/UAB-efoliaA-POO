/*
 * Data.h
 *
 *  Created on: 04/05/2015
 *      Author: orlando
 */

#ifndef DATA_H_
#define DATA_H_

class Data {
	int dia;
	int mes;

public:
	Data();
	Data(int, int);
	virtual ~Data();
	int getDia();
	int getMes();
	int VerificarData(int&);
};

#endif /* DATA_H_ */
