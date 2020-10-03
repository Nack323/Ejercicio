#ifndef User_h
#define User_h

#include<iostream>
#include<string>

class User
{
	private:
		std::string bannerID;
		std::string nombre;
		std::string apellido; 
		std::string contrasenia;
		std::string usuario; 
		
	public:
		User();
		
		User(std::string,std::string,std::string,std::string,std::string);
		
		void setBannerID(std::string);
		void setNombre(std::string);
		void setApellido(std::string);
		void setContrasenia(std::string);
		void setUsuario(std::string);
		
		std::string getBannerID();
		std::string getNombre();
		std::string getApellido();
		std::string getContrasenia();
		std::string getUsuario();
		
		std::string to_string();
			
};
#endif

