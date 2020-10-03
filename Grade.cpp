#include "Grade.h"
#include <iostream>

Grade::Grade(){}

Grade::Grade(float nota){
	if(nota <= 100){
		this->nota = nota;
	} else {
		std::cout << "not a valid note" << std::endl;
	}
	if(nota >= 91){
		this->letra = 'A';
	} else if (nota >= 81){
		this->letra = 'B';
	} else if (nota >= 71){
		this->letra = 'C';
	} else if (nota >= 61){
		this->letra = 'D';
	} else {
		this->letra = 'F';
	}
}

void Grade::setNota(float nota){
	if(nota <= 100){
		this->nota = nota;
	} else {
		std::cout << "not a valid note" << std::endl;
	}
	if(nota >= 91){
		this->letra = 'A';
	} else if (nota >= 81){
		this->letra = 'B';
	} else if (nota >= 71){
		this->letra = 'C';
	} else if (nota >= 61){
		this->letra = 'D';
	} else {
		this->letra = 'F';
	}
}

float Grade::getNota(){
	return this->nota;
}

char Grade::getLetra(){
	return this->letra;
}
