#include <iostream>
using namespace std;
#include <cstring>

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
void employee :: getinfo () { cout << " Enter the salary: " <<endl;
                              cin >> salary;
							  cout << " Enter the hoursPerDay: " <<endl;
							  cin>> hoursPerDay;
                            }

void employee :: addsal () { if (salary < 500 )
                                {
                                    salary+= 10;
                                    cout << " We have add 10 to u as u are arm: " << salary << endl;
                                }
                           }

void employee :: addwork() {  if (hoursPerDay > 6 )
                                    {
                                        salary+= 10;
                                        cout << " We have add 5 to u as u are arm: " << salary << endl;
                                    }
                            }

int main ()
{
	employee e1;
	e1.getinfo();
	e1.addsal();
	e1.addwork();
return 0;
}
