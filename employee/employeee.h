#ifndef EMPLOYEEE_H_INCLUDED
#define EMPLOYEEE_H_INCLUDED
#include <string>
using namespace std;
class employee {
private: double salary;
		 float hoursPerDay;
public:
		 void getinfo();
		 void addsal();
		 void addwork();
		 employee () { salary = 0; hoursPerDay  = 0;}
		 ~employee(){};
};


#endif // EMPLOYEEE_H_INCLUDED
