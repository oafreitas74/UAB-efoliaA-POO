/*
 * Matematica.h
 *
 *  Created on: 04/05/2015
 *      Author: orlando
 */

#ifndef MATEMATICA_H_
#define MATEMATICA_H_

#include <string>

using std::string;

class Matematica {
	int idTeste;
	int ano;
	int periodo;
	string nome;
	int x;
	int y;
	int Total;
	string c;
	string igual;
public:
	void setID(int _Id);
	void setAno(int _ano);
	void setPeri(int _periodo);
	void setNome(string _nome);
	void setX(int _x);
	void setY(int _y);
	void setTotal(int _Total);
	void setC(string _c);
	void setIgual(string _igual);
	int getID();
	int getAno();
	int getPeri();
	string getNome();
	int getX();
	int getY();
	int getTotal();
	string getC();
	string getIgual();
	Matematica();
	Matematica(int,int,int,string,int,int,int,string,string);
	virtual ~Matematica();
	void VerTestes();
	void VerRespostas();
};

#endif /* MATEMATICA_H_ */
