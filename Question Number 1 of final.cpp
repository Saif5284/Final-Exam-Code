#include<iostream>
using namespace std;

class Shape{
	public:
	int obj1;
		virtual calculateArea()=0;
		void printArea(){
			cout<<"Print Area : "<<endl;
			
		}
};
class TwoDim:public Shape{
	public:
		int obj2;
	virtual calculateTwoDimArea()
	{
		cout<<"Calculate TwoDim :"<<endl;	
	}
};





class ThreeDim:public Shape{
	public:
		int obj3;
virtual calculateThreeDim(){
cout<<"Calculate ThreeDim :"<<endl;	
}
};
  

class Circle:public TwoDim{
	public:
		int obj4;
		void printArea(){
			cout<<"Print area of a circle"<<endl;
			
		}
		
};

class Triangle:public TwoDim{
	public:
		int obj5;
		void printArea(){
			cout<<"Print Area of a Trinagle"<<endl;
			
		}
		
};

class Rectangle:public TwoDim{
	public:
		int obj6;
		void printArea(){
			cout<<"Print Area of a Rectangle"<<endl;
			
		}
		
};
class Cube:public ThreeDim{
	public:
		int obj6;
		void printArea(){
			cout<<"Print Area of a Rectangle"<<endl;
			
		}
		
};
class Cone:public ThreeDim{
	public:
		int obj6;
		void printArea(){
			cout<<"Print Area of a Rectangle"<<endl;
			
		}
		
};




int main()
{
Shape* obj1 = new Shape();
TwoDim* obj2 = new TwoDim();
ThreeDim* obj3 = new ThreeDim();
TwoDim* obj4 = new Circle();
TwoDim* obj5 = new Triangle();
Circle* obj6 = new Circle();
Rectangle* obj7 = new Rectangle();
Cube* obj8 = new Cube();
Cone* obj9 = new Cone();
obj7->printArea();
obj8->printArea();
obj9->printArea();
obj8->calculateThreeDimArea();
obj6->calculateTwoDimArea();
}
