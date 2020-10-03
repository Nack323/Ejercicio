#ifndef Faculty_h
#define Faculty_h

#include "User.h"
#include "Course.h"
class Faculty : public User {
private:
    std::string carrera;
    Course *cursos;
public:
    Faculty();
    Faculty(std::string, std::string, std::string, std::string, std::string, std::string);
    void setCarrera(std::string);
    void setCursos(Course*, int);
    std::string getCarrera();
    Course* getCursos();
    std::string to_string(); //revisar
};
#endif