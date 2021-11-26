/*
 * GuardarProvas.h
 *
 *  Created on: 04/05/2015
 *      Author: orlando
 */

#ifndef GUARDARPROVAS_H_
#define GUARDARPROVAS_H_

#include <vector>
#include <iostream>
#include "CriacaotestesMat.h"


class GuardarProvas {
	int id;
	vector<CriacaotestesMat> lista;
public:
	GuardarProvas(int);
	virtual ~GuardarProvas();
	void verVetor();
	void GuardarTestes();
};

#endif /* GUARDARPROVAS_H_ */
