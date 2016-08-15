#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	float L, payments, amntpaid, rate, interest;
	int N;
	
	cout<<"Monthly Payments"<<endl;
	cout<<"****************"<<endl;
	
	cout<<"Please enter your loan amount :  "<<endl;
	cin>>L;
	cout<<"What is the interest rate?:  "<<endl;
	cin>>rate;
	cout<<"How many payments have you made?: "<<endl;
	cin>>N;

	
	cout<<"Please wait....."<<endl;
	system ("PAUSE");
	system ("CLS");
	
	cout<<"Loan Amount:           "<< L<<endl;
	cout<<"Monthly Interest Rate:         "<< rate <<endl;
	cout<<"Number of Payments:           "<< N<<endl;
	
	cout<<"Monthly Payment:            "<<(rate*pow (1+ rate,N))/(pow(1+rate, N)-1) *L <<endl;
	cout<< setprecision(2) << fixed <<"Amount paid back:        "<< (payments * N) << amntpaid <<endl;
	cout<< setprecision(2)<< fixed <<"Interest Paid:        "<< ( amntpaid-L) << interest <<endl;
	

	return 0;
}
