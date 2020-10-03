#include "User.h"
#include <iostream>
#include <string>

using namespace std;

User::User()
{
}

User::User(string bannerID,string nombre,string apellido,string usuario, string contrasenia)
{
	this->bannerID=bannerID;
	this->nombre=nombre;
	this->apellido=apellido; 
	this->usuario=usuario; 
	this->contrasenia=contrasenia;  
}

void User::setBannerID(string bannerID)
{
	this->bannerID=bannerID;
}

void User::setNombre(string nombre)
{
	this->nombre=nombre;
}

void User::setApellido(string apellido)
{
	this->apellido=apellido;
}

void User::setUsuario(string usuario)
{
	this->usuario=usuario;
}

void User::setContrasenia(string contrasenia)
{
	this->contrasenia=contrasenia;
}


string User::getBannerID()
{
	return bannerID;
}

string User::getNombre()
{
	return nombre;
}

string User::getApellido()
{
	return apellido;
}

string User::getUsuario()
{
	return usuario;
}

string User::getContrasenia()
{
	return contrasenia;
}


string User::to_string()
{
	//Revisar 
	string datos;
	datos=bannerID+nombre+apellido+usuario+contrasenia;
	return datos;
}

