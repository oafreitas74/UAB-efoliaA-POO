/*
 * Portugues.h
 *
 *  Created on: 04/05/2015
 *      Author: orlando
 */

#ifndef PORTUGUES_H_
#define PORTUGUES_H_

#include <string>

using std::string;

class Portugues {
	string nome;
public:
	Portugues();
	Portugues(string);
	virtual ~Portugues();
	string getNome();
};

#endif /* PORTUGUES_H_ */
