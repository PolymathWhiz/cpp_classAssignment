#include <iostream>
#include <cstdlib>
#include <ctime>
/* this program is used to generate ten random numbers */
using namespace std;

int main() 
{
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
	unsigned seed=time(0);
	
	srand(seed);
	num1=rand();
	num2=rand();
	num3=rand();
	num4=rand();
	num5=rand();
	num6=rand();
	num7=rand();
	num8=rand();
	num9=rand();
	num10=rand();
	
	cout<<num1<<"   \n"<<num2<<"   \n"<<num3<<"  \n"<<num4<<"   \n"<<num5<<"  \n"<<num6<<"   \n"<<num7<<"   \n"<<num8<<"   \n"<<num9<<"   \n"<<num10<<"  \n"<<endl;
	
	
	
	
	return 0;
}
