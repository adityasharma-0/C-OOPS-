#include<iostream>
using namespace std;

class Teacher {
public:
 string name;
 string dept;
 string subject;
 
 private:
 	double salary;
 
 public:
 void change(string newdept)	{
 	dept = newdept;
 }
 
 void setsalary (double s){
 	salary = s;
 }
 
double getsalary () {
 	return salary;
 }
 // non PARAMETERIZED 
 Teacher(){
 	cout<<"i am constructer"<<"CSE";
 }
// PARAMETERIZED 
//Teacher(string n,string d,string m){
//	name = n;
//	dept = d;
//	subject = m;
//}
Teacher(Teacher &orgobj){
	cout<<" i  am custom copy constructor"<<endl;
	this->name = orgobj.name;
	this->dept = orgobj.dept;
	this->subject = orgobj.subject;  
}


Teacher(string name,string dept,string subject){
	this->name = name;
	this->dept = dept;
	this->subject = subject;    //this constructor
}

void getinfo(){
	cout<<name<<endl;
	cout<<dept<<endl;
	cout<<subject<<endl;
}
};

int main(){

//	Teacher t1; //constructer called
//	t1.name = "adu";
//	t1.dept = " cse";
//	t1.subject = "Maths";
////	t1.salary = "3445345345" not access  
//	t1.setsalary(239999);
//	cout<<t1.getsalary()<<endl;
//	cout<<t1.name<<" "<<t1.subject;
	
	Teacher t1("adu","CSE","MATHS");
	t1.getinfo();
	
	Teacher t2(t1);  //default constructor called
	t2.getinfo();
}


