#include "employeee.h"
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
