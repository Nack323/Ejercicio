#include <iostream>
#include "User.h"
#include "Faculty.h"
#include "Grade.h"
using namespace std;

int main(){
	Grade n(72);
	cout << n.getLetra() << endl;
	return 0;
}
