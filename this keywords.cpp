#include<iostream>
using namespace std;

class Cricketer{
public:
	string name;
	int run;
	
	Cricketer(){
	}
		
	Cricketer(string s, int m){
		this->name = name;  // used for same variable as constructor 
		this->run = run;
	}
};

int main(){
	Cricketer c1("virat",494994);
	Cricketer c2;
	c1.name = "kulu";
	c1.run = 0;
	cout<<c1.name<<" "<<c1.run;
}
