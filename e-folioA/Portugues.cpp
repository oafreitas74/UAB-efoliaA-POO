/*
 * Portugues.cpp
 *
 *  Created on: 04/05/2015
 *      Author: orlando
 */

#include "Portugues.h"

#include <string>

using std::string;
Portugues::Portugues() {
	this->nome = "";

}
Portugues::Portugues(string nome) {
	this->nome = nome;

}
Portugues::~Portugues() {
	// TODO Auto-generated destructor stub
}

string Portugues::getNome() {return nome; }
