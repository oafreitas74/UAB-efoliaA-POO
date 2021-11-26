/*
 * CriacaotestesMat.h
 *
 *  Created on: 04/05/2015
 *      Author: orlando
 */

#ifndef CRIACAOTESTESMAT_H_
#define CRIACAOTESTESMAT_H_

#include <vector>
#include "Matematica.h"
#include "Data.h"

using std::vector;

class CriacaotestesMat {
	int idTeste;
	vector<Matematica> Mat;
	Data date;
public:
	void ContarObjetos(int,int,int);
	void Adicao(int,int,int,int);
	void Subtracao(int,int,int,int);
	void Divisao(int,int,int,int);
	void Multiplicacao(int,int,int,int);
	void ParesImpares();
	void Primos();
	void MenuMatematica(int);
	void VerTestes();
	void VerRespostas();
	int getId();
	CriacaotestesMat();
	CriacaotestesMat(int,Data);
	virtual ~CriacaotestesMat();
};

#endif /* CRIACAOTESTESMAT_H_ */
