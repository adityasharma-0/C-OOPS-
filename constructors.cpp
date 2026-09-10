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
	
	Student s3;
	s3.name = "aditi";
	s3.roll = 79;
	s3.gpa = 9.5;
  print(s1);
  print(s2);
  print (s3);

}
