#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	int roll;
	float gpa;
	
	Student (){
		
	}
	
	Student(string s,int r){
		name = s;
		roll = r;
	
	}
	
		Student(string s,int r,float g){
		name = s;
		roll = r;
		gpa = g;
	
	}
};

void print(Student s){
	cout<<s.name<<" "<<s.roll<<" "<<s.gpa<<endl;                
}

int main(){
	Student s1("adi",34);
	s1.name = "aditya";
	s1.roll = 69;   //over write
	s1.gpa = 9.9;
    Student s2("abhi",44);   
	s2.gpa = 9.0;     
	
	Student s3("aditi",67,9.7);
	Student s6 = s1;  // copy deep copy
	Student s7(s1); //copy constructor deep copy                     
	

  print(s1);
  print(s2);
  print (s3);
  print(s6);

}
