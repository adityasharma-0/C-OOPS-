#include<iostream>
using namespace std;

class Student {
public:
	string name;
//	double cgpa;
	double* cgpaptr;
	
	Student (string name,double cgpa){
		this->name = name;
//		this->cgpa = cgpa;
        cgpaptr = new double;
        *cgpaptr = cgpa;
	}
	 void getinfo(){
	 	cout<<name<<" "<<*cgpaptr<<endl;
	 }
	 Student(Student &obj){
	 	this->name = obj.name;
	 	cgpaptr = new double;  //deep copy
	 	*cgpaptr = *obj.cgpaptr;
	 }
	 
	 //desturctor
	 ~Student(){
	 	cout<<"hi i am destructor"<<endl;
	 	delete cgpaptr; //memory leak
	 }
};

int main(){
	Student s1("adi",9.9);
	Student s2(s1);
		s2.getinfo();
	*(s2.cgpaptr) = 9.5;
	 s1.getinfo();
	 s2.getinfo();
}
