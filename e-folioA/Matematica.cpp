/*
 * Matematica.cpp
 *
 *  Created on: 04/05/2015
 *      Author: orlando
 */

#include "Matematica.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

Matematica::Matematica() {
	this->idTeste = 0;
	this->ano = 0;
	this->periodo = 0;
	this->nome = " ";
	this->x = 0;
	this->y = 0;
	this->Total = 0;
	this->c = " " ;
	this->igual = " ";
}

Matematica::Matematica(int idTeste,int ano, int periodo,string nome, int x,int y, int Total, string c, string igual){
	this->idTeste = idTeste;
	this->ano = ano;
	this->periodo = periodo;
	this->nome = nome;
	this->x = x;
	this->y = y;
	this->Total = Total;
	this->c = c;
	this->igual = igual;
}

Matematica::~Matematica() {
	// TODO Auto-generated destructor stub
}
void Matematica::setAno(int ano) {
	this->ano = ano;
}
void Matematica::setPeri(int periodo) {
	this->periodo = periodo;
}
void Matematica::setNome(string nome) {
	this->nome = nome;
}
void Matematica::setX(int x) {
	this->x = x;
}
void Matematica::setY(int y) {
	this->y = y;
}
void Matematica::setTotal(int Total) {
	this->Total = Total;
}
void Matematica::setC(string c) {
	this->c = c;
}
void Matematica::setIgual(string igual) {
	this->igual = igual;
}

int Matematica::getAno() {return ano; }
int Matematica::getPeri() {return periodo; }
string Matematica::getNome() {return nome; }
int Matematica::getX() {return x; }
int Matematica::getY() {return y; }
int Matematica::getTotal() {return Total; }
string Matematica::getC() {return c; }
string Matematica::getIgual() {return igual; }

void Matematica::VerTestes(){

	string n = "Objetos";
	if(!n.compare(nome)){
		cout << "Exercicio de " << nome << endl;
		cout << "Quantos circulos aparecem ? " << endl;
			for(int i=0; i<= x;i++){
				cout<< "O ";
			}
		cout << igual << endl;

	}
	else{
		cout << "Exercicio de " << nome << endl;
		cout << x << c << y << igual << endl;

	}

}

void Matematica::VerRespostas (){

	cout << "Resposta correta: " << Total << endl;
}
