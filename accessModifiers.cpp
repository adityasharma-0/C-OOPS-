#include<iostream>
using namespace std;
class Student{
public:
	int roll;
	string name;
	
	Student(int roll, string name, float marks){
		this->roll = roll;
		this->name = name;
		this->marks = marks;
	}
	Student (){
		
	}
	void print(){
		cout<<roll<<" "<<name<<" "<<marks;
	}
	float getmarks(){  // it is used print an private members 
		return marks;
	}
	void setmarks(float m){ //setter
		marks = m;
	}
private:
	float marks;
	
};

int  main(){
	Student s1(22,"adi",99.0);
	
	s1.print();
	cout<<endl;
	
	cout<<s1.getmarks()<<endl;
	
	s1.setmarks(98.8);
	
	cout<<s1.getmarks();
}

