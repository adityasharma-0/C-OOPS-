#include<iostream>
using namespace std;
class Car{
	public:
	string name;
	int price;
	int seats;
	string type;
};
void print (Car c){
	cout<<c.name<<" "<<c.price<<" "<<c.seats<<c.type;
}
void change(Car &c){
	c.name = "maruti";
}

int main(){
	Car c1;
	c1.name="activa";
	c1.price=25000;
	c1.seats=2;
	c1.type="petrol";
	
	Car c2;
	c2.name="audi";
	c2.price=200;
	c2.seats=2;
	c2.type="petrol";
	
	print(c1);
	change(c1);
	print(c1);
	print(c2);

}
	
