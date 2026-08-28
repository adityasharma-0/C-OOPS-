#include<iostream>
using namespace std;
class Student{
	public
	:
	string name;
	int roll;
	float gpa;
};
int main(){
	Student s1;
	s1.name = "adi";
	//s1.roll;
	s1.gpa = 9.6;
	cin>>s1.roll;
	
	Student s2;
	s2.name = "hello";
	s2.gpa = 9.9;
	s2.roll = 45;
	cout<<s1.name<<" "<<s1.roll<<" "<<s2.name;
}
