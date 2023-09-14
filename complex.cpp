#include<iostream>
using namespace std;


class complex 
{
	private :
		int x,y;
	public:
		complex(){
			x = 0;
			this->y = 0;
		}
		complex(int x,int y){
			this->x = x;
			this->y = y;
		}
		int getx(){
			return this->x;
		}
		int gety(){
			return this->y;
		}
		void setx(int x){
			this->x = x;
		}
		void sety(int y){
			this->y = y;
		}
		
		void addition(complex c1,complex c2){
			this->x = c1.getx() + c2.getx();
			this->y = c1.gety() + c2.gety();
		}
		void subtraction(complex c1,complex c2){
			this->x = c1.getx() - c2.getx();
			this->y = c1.gety() - c2.gety();
		}
		void multiplication(complex c1,complex c2){
			this->x = c1.getx() * c2.getx();
			this->y = c1.gety() * c2.gety();
		}
		
		void print(){
			cout<<this->x<<" + i"<<this->y<<endl;
		}
};


int main()
{

	int x1,y1,x2,y2;
		
	cout<<"enter x1 and y1 : ";
	cin>>x1>>y1;
	
	cout<<"enter x2 and y2 : ";
	cin>>x2>>y2;
	
	complex c1(x1,y1);
	complex c2(x2,y2);
	
	cout<<"complex num1 = ";
	c1.print();
	cout<<"complex num2 = ";
	c2.print();
	
	complex c3;
	c3.addition(c1,c2);
	cout<<"resultant complex number after addition of num1 and num2 = ";
	c3.print();
	
	c3.subtraction(c1,c2);
	cout<<"resultant complex number after subtraction of num1 and num2 = ";
	c3.print();
	
	c3.multiplication(c1,c2);
	cout<<"resultant complex number after multiplication of num1 and num2 = ";
	c3.print();
	
}





