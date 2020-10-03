#ifndef Grade_h
#define Grade_h

class Grade{
private:
	float nota{0};
	char letra{'F'};
public:
	Grade();
	Grade(float);
	void setNota(float);
	float getNota();
	char getLetra();
};
#endif
