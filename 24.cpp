#include <iostream>
#include <string>
#include <cstdlib>
/* word game program */
using namespace std;

int main() 
{
	string name, city, college, profession, animal, petname;
	int age;
	
	cout<<"WELCOME TO WORD PLAY!"<<endl;
	cout<<"*********************"<<endl;
	system("PAUSE");
	system("CLS");
	
	cout<<"Please provide short answers to the following questions!"<<endl;
	cout<<"********************************************************"<<endl;
	system("PAUSE");
	system("CLS");
	
	cout<< "What is your name?:   "<<endl;
	getline(cin,name);
	
	cout<<"How old are you?:  "<<endl;
	cin>>age;
	
	cout<<"In which city do you reside?:  "<<endl;
	cin>>city;
	
	cout<<"Which college did you attend?:   "<<endl;
	cin>>college;
	
	cout<<"What is your profession?:   "<<endl;
	cin>>profession;
	
	cout<<"What animal would you like as a pet?:  "<<endl;
	cin>>animal;
	
	cout<<"What would you call it?:  "<<endl;
	cin>>petname;
	
	system("PAUSE");
	
	cout<<" There once was a person called "<<name<<" who lived in "<<city<<"."<<endl;
	cout<<"At the age of "<<age<<",  "<<name<<" went to college at "<<college<<". "<<name<<" graduated and went to work as a "<<profession<<"."<<endl;
	cout<<"Then, "<<name<<" adopted a "<<animal<<" named "<<petname<<"."<<" They both lived happily ever after!"<<endl;
	
	return 0;
}
