#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

/*this program converts amounts in dollars to yen and to euros using current exchange rates*/
#define yen 112.7045
#define euros 0.9045
#define YEN_PER_DOLLAR
#define EUROS_PER_DOLLAR

using namespace std;

int main ()
{
	float dollar;
	
	cout<<"THE CURRENCY CONVERTER."<<endl;
	cout<<"***********************"<<endl;
	
	cout<<"Please enter your amount in dollars:   "<<endl;
	cin>>dollar;
	
	system("PAUSE");
	system("CLS");
	
	cout<<"After converting to YEN and EUROS......"<<endl;
	cout<<setprecision(2)<<fixed;                                 /*setting the expected output to two decimal places of precision*/
	cout<<"YEN_PER_DOLLAR = "<< ( dollar * yen)<<endl;
	cout<<"EUROS_PER_DOLLAR = "<< ( dollar * euros)<<endl;
	
	return 0;
}

