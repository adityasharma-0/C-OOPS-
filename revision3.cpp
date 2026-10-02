#include<iostream>
using namespace std;

class Person {
public:
	string name;
	int age;
	
	Person (string name, int age){
		this->name= name;
		this->age = age;
	}
//    Person() {
//    	cout<<"i am parent"<<endl;
//}
};

class Student : public Person{  //inheretence type
	public:
		int roll;
	Student(string name,int age,int roll): Person (name,age){ //callling constructor of base class
		this->roll = roll;
	}
	
	void getinfo(){
		cout<<"name :"<<name<<endl;
		cout<<"age :"<<age<<endl;
		cout<<"rollno :"<<roll<<endl;
	}
};
	int main(){
//		Student s1;
//		s1.age = 21;
//		s1.name = "adi";
//		s1.roll= 343;
//		s1.getinfo();
       Student s1("adi",32,555);
       s1.getinfo();
}
