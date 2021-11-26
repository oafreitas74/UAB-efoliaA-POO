/*
 * e-folioA.cpp
 *
 *  Created on: 04/05/2015
 *      Author: orlando
 */

#include "CriacaotestesMat.h"
#include <iostream>
#include <string>
#include <cstdlib>
using std::string;
using std::cout;
using std::cin;
using std::endl;



int main(){
	int op=0, q=0;
	CriacaotestesMat menu;

	cout<< "        ============================================== " << endl
	    << "        |       Licenciatura de Informatica          | " << endl
	    << "        |        Programacao por Objetos C++         | " << endl
	    << "        |                 E-folio A                  | " << endl
	    << "        |     Aluno N.1201425 - Orlando Freitas      | " << endl
	    << "        ============================================== " << endl
		<< endl
		<<"			========================================" <<endl
		<<"			|     Bem vindo a Criacao de Testes    |" <<endl
		<<"			========================================" <<endl
		<< endl
		<< "Escolhe uma opçao: " << endl
		<< "1- Criar teste de Matematica" << endl
		<< "2- Criar teste de Portugues" << endl
		<< "3- Ver testes guardados" << endl
		<< "0- Sair" << endl;
	cin >> op;
	if(op == 1 || op ==2)
	cout<< "Quantas questoes tem o teste? ";

	cin >> q;
	switch (op) {
			case 1:
				menu.MenuMatematica(q);
				break;
			case 2:

				break;
			case 3:
	//			menu.VerTestes();
				break;
			case 0:
				exit(0);
				break;
			default:
				main();
				break;
		}
		main();
	return 0;
}



