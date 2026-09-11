#include<iostream>
using namespace std;

class Cricketer{
public:
	string name;
	int run;
	float avg;
	
	Cricketer(){
	}
		
	Cricketer(string name , int run,float avg){
		this->name = name;  
		this->run = run;
		this->avg = avg;		
	}
	void print (int run){
		cout<<name<<" "<<this->run<<" "<<avg<<endl; //function inside class
		cout<<run<<endl;
	}
};

int main(){
	Cricketer c1("virat",494994,95.5);
	Cricketer c2("Rohit",23444,90.5);

    c1.print(5);
    cout<<c1.run<<endl;
    c2.print(6);
}
