/*
 * CriacaotestesMat.cpp
 *
 *  Created on: 04/05/2015
 *      Author: orlando
 */

#include "CriacaotestesMat.h"
#include "Matematica.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

CriacaotestesMat::CriacaotestesMat() {
	this-> idTeste= 0;

}
CriacaotestesMat::CriacaotestesMat(int id, Data date) {
	this-> idTeste= id;
	this-> date = date;
}
CriacaotestesMat::~CriacaotestesMat() {
	// TODO Auto-generated destructor stub
}


void CriacaotestesMat::MenuMatematica(int q){
	int p= 0, op = 0;

		cout<<"========================================" <<endl
			<<"| Bem vindo a Disciplina de Matematica |" <<endl
			<<"========================================" <<endl
			<< endl
			<< "Escolhe uma opçao: " << endl
			<< "1- Questoes do 1o ano" << endl
			<< "2- Questoes do 2o ano" << endl
			<< "0- Sair" << endl;
		cin >> op;

		if(op != 0){
		char c;
		int _mes, _dia;
		cout << "Intruduza a data(Dia Mes): ";
		cin >> _dia >> c >> _mes;
// verificar a data correspondente a periodo
		date = Data(_dia, _mes);
		date.VerificarData(p);
		idTeste++;
		}
		srand(time(NULL));
		int _x;
		int _y;
		for(int i=0; i<q; i++){
			switch (op){

				case 1:
					if(p==1){
			// 1º ano 1º periodo
						_x=rand()%9+1;
						ContarObjetos(_x,op,p);
					}
			// 1º ano 2º periodo
					if(p==2){
						_x=rand()%9+1;
						_y=rand()%9+1;
						Adicao(_x,_y,op,p); // adiçao com numeros até 10
					}
					if(p==3){
			// 1º ano 3º periodo
						_x=rand()%9+1;
						_y=rand()%9+1;
						while(_x<_y)
							_y=rand()%9+1;
						Subtracao(_x,_y,op,p);
					}
					break;
				case 2:
					if(p==1){
			// 2º ano 1º periodo
						_x=rand()%99+1;
						_y=rand()%99+1;
						Adicao(_x,_y,op,p); // adiçao com numeros até 100
					}
					if(p==2){
			// 2º ano 2º periodo
						_x=rand()%99+1;
						_y=rand()%9+1;
						Multiplicacao(_x,_y,op,p);
					}
					if(p==3){
			// 2º ano 3º periodo
						_x=rand()%9+1;
						_y=rand()%9+1;
						_x= _x*_y;
						Divisao(_x,_y,op,p);
					}
					break;
				case 0:
					exit(0);
					cout<<"A sair ...";
					break;
				default:
					MenuMatematica(q);
					break;
				}
		}
		VerTestes();
		VerRespostas();


}
void CriacaotestesMat::ContarObjetos(int _x,int op,int p){
	Matematica _mat;
	int _Total, _y=0;
	string _c, _igual= " =";
	string _nome = "Objetos";
	_Total = _x+1;

	_mat = Matematica(idTeste,op,p,_nome, _x, _y, _Total, _c, _igual);
	Mat.push_back(_mat);
}
void CriacaotestesMat::Adicao(int _x, int _y,int op,int p){
	Matematica _mat;
	int _Total;
	string _c= " + ", _igual= " =";
	string _nome = "Adicao";
	_Total = _x+_y;

	_mat = Matematica(idTeste,op,p,_nome, _x, _y, _Total, _c, _igual);
	Mat.push_back(_mat);

}
void CriacaotestesMat::Subtracao(int _x, int _y,int op,int p){
	Matematica _mat;
	int _Total;
	string _c= " - ", _igual= " =";
	string _nome = "Subtracao";
	_Total = _x-_y;

	_mat = Matematica(idTeste,op,p,_nome, _x, _y, _Total, _c, _igual);
	Mat.push_back(_mat);
}
void CriacaotestesMat::Multiplicacao(int _x, int _y,int op,int p){
	Matematica _mat;
	int _Total;
	string _c= " x ", _igual= " =";
	string _nome = "Multiplicacao";
	_Total = _x*_y;

	_mat = Matematica(idTeste,op,p,_nome, _x, _y, _Total, _c, _igual);
	Mat.push_back(_mat);

}
void CriacaotestesMat::Divisao(int _x, int _y,int op,int p){
	Matematica _mat;
	int _Total;
	string _c= " / ", _igual= " =";
	string _nome = "Divisao";
	_Total = _x/_y;

	_mat = Matematica(idTeste,op,p,_nome, _x, _y, _Total, _c, _igual);
	Mat.push_back(_mat);

}

void CriacaotestesMat::ParesImpares(){

}
void CriacaotestesMat::Primos(){

}
void CriacaotestesMat::VerTestes(){
	int j=0;
	Matematica tempMat = Mat.at(j);
	cout << "Teste de Matematica do: " << endl;
	cout << tempMat.getAno() << "º ANO" << endl;
	cout << tempMat.getPeri() << "º PERIODO" << endl;
	cout << "Criado em: " << date.getDia() << "/" << date.getMes() << endl;
	 int TAM = Mat.size(); // ver o tamanho do vetor
	for(int i=0; i<TAM; i++){
		Matematica tMat = Mat.at(i);// copiar a posiçao no vetor para a lista temporaria
			tMat.VerTestes();
			cout << endl;
		}
}
void CriacaotestesMat::VerRespostas(){
	int TAM = Mat.size(); // ver o tamanho do vetor
	for(int i=0; i<TAM; i++){
			Matematica tempLista = Mat.at(i);// copiar a posiçao no vetor para a lista temporaria
			tempLista.VerRespostas();
			cout << endl;
		}
}
