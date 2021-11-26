/*
 * GuardarProvas.cpp
 *
 *  Created on: 04/05/2015
 *      Author: orlando
 */

#include "GuardarProvas.h"
#include <iostream>

GuardarProvas::GuardarProvas(int id) {
	this->id = id;
}
GuardarProvas::~GuardarProvas() {

}

void GuardarProvas::verVetor(){

}/*
GuardarProvas::GuardarProvas(vector<CriacaotestesMat> &l) {
	lTestes = l;
}
void GuardarProvas::Menu() {
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
					verVetor();
					break;
				case 0:
					exit(0);
					break;
				default:
					Menu();
					break;
			}
		Menu();
}

void GuardarProvas::GuardarVetor(CriacaotestesMat vetor){
 cout<< "guardado teste " << endl;
 int TAM = lTestes.size(); // ver o tamanho do vetor
 cout << TAM << endl;
	lTestes.push_back(vetor);

	TAM = lTestes.size(); // ver o tamanho do vetor
	 cout << TAM << endl;
}
void GuardarProvas::verVetor(){
	 cout<< "Ver testes " << endl;
	int j=0, i=1;

		for(it=lTestes.begin(); it != lTestes.end(); it++){

				(*it).VerTestes(i);
				cout << endl;
			}
		 cout<< "Ver testes " << endl;
}

}
*/
