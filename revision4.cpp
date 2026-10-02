#include<iostream>
using namespace std;

//class Student {
//	public:
//		string name;
//		
//		Student(){
//			cout<<"non parameterized";
//		}
//		
//		Student(string name){
//			this->name = name;
//		}
//		void print(){
//			cout<<name<<endl;
//		}
//	};
//	int main(){
//		Student s1("adi");
//       s1.print();
//	    Student s2;     
//	}
//--------------------------------------------
//class Print{
//	public:
//	void show(int x){
//		cout<<"int is"<<" "<<x<<endl;
//	}
//	void show( char ch){
//		cout<<"c is"<<" "<<ch<<endl;
//	}
//};
//int main(){
//	Print p1;
//	p1.show(8);
//	p1.show('&');  // this is polymorphism
//}                  // overloading
//class Parent {
//public:
//    void getInfo() {
//        cout << "parent class\n";
//    }
//
//    virtual void hello() {  //virtual class
//        cout << "hello from par\n";
//    }
//};
//
//class Child : public Parent {
//public:
//    void getInfo() {
//        cout << "child class\n";
//    }
//    void hello() {
//        cout << "hello from child\n";
//    }
//};
//int main() {
//	Child c1;
//	c1.hello();
//}//-------------------------------------------
 class Shape{
 	
 	virtual void draw() = 0; // pure virtual function
};
 class Circle : public Shape{
 	public:
 		void draw(){
 			cout<<"drawing a circle";
		 }
	};
	int main(){
		Circle c1;
		c1.draw();
	}
 
