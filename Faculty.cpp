#include "Faculty.h"
#include "User.h"
#include "Course.h"
#include <iostream>
using namespace std;

Faculty::Faculty(){}
Faculty::Faculty(string bannerID, string nombre, string apellido, string usuario, string contrasenia, string carrera): User(bannerID, nombre, apellido, usuario, contrasenia) {
    this->carrera = carrera;
}

void Faculty::setCarrera(string carrera){
    this->carrera = carrera;
}

void Faculty::setCursos(Course* cursos, int totalCursos){
    this->cursos = new Course[totalCursos];
    for (int i = 0; i < totalCursos; i++){
        this->cursos[i] = cursos[i]; 
    }
}

string Faculty::getCarrera(){
    return this->carrera;
}

Course* Faculty::getCursos(){
    return cursos;
}