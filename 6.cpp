#include <iostream>
#include <iomanip>
#include <cstdlib>

/*this program displays the amount of each ingredient needed to bake a given number of cookies*/

using namespace std;

#define sugar 32.00
#define butter 48.00
#define flour 17.45

int main()
{
	double Cookies;
	
	cout<<"Hi there, Please enter the number of cookies you want to prepare:  "<<endl;
	cin>>Cookies;
	system ("PAUSE");
	system ("CLS");

	cout<<"Please wait while your recipe is loading"<<endl;
	system ("PAUSE");
	system ("CLS");
	
	cout<<"This is your recipe."<<endl;
	cout<<"********************"<<endl;
	cout<<( Cookies/ sugar)<<" cups of sugar"<<endl;
	cout<<( Cookies/ butter)<<" cups of butter"<<endl;
	cout<<( Cookies/ flour)<<" cups of flour"<<endl;
	
	
	return 0;
} 	
