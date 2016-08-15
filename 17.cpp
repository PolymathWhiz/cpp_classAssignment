#include <iostream>
#include <cstdlib>
#include <ctime>
/* math tutor */
using namespace std;
int main() 
{
	int num1, num2;
	int sum;
	unsigned seed=time(0);
	srand(seed);
	num1=rand();
	num2=rand();
	
	cout<<"WELCOME TO THE MATH TUTOR!"<<endl;
	cout<<"**************************"<<endl;
	system("PAUSE");
	
	cout<<"num1 "<<num1<<endl;
	cout<<"num2 "<<num2<<endl;
	cout<<"Solve before you check the answer!"<<endl;
	system("PAUSE");
	

	
	cout<<"Sum is "<<num1+num2<<endl;
	
	
	
	return 0;
}
