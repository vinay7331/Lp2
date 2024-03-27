// Objects and classes are used to wrap related functions and data in one place. An object is an entity that has
state and behaviour. Here, state means data and behaviour means functionality.
Create a class Room with Data members: length, breadth. Include functions get () and display () to get
and display the data of room. Include two additional functions: area () and perimeter () to calculate the area
and perimeter of the room. Implement the class by creating at least 5 objects of the class and display the area
and perimeter of all 5 rooms.
“An array is a data structure where values or items are placed in a linear order, which means the memory
assigned to each item is contiguous. The data type of an array is the same for all the elements present in it.”
So, the above statement is implemented by creating an array of object of Room class.



#include<iostream>
#include<stdlib.h>
using namespace std;
class room{
	public:
double length,breadth;
void get()
{double l,b;
	cout<<"enter length and breadth"<<endl;
	cin>>l>>b;
	length=l,breadth=b;
	};	
void display();	
void area()
{
cout<<"area= "<<length*breadth<<endl;	
}	
void perimeter()
{
cout<<"perimeter= "<<2*(length+breadth);	
	
}	
	
};
void room::display(){
cout<<"length= "<<length<<endl;
cout<<"breadth= "<<breadth<<endl;		
}





int main()
{
	system("color 0E");
room obj,obj1,obj2,obj3,obj4;
obj.get();
obj.display();	
obj.area();
obj.perimeter();	
cout<<endl;
obj1.get();
obj1.display();	
obj1.area();
obj1.perimeter();	
cout<<endl;
obj2.get();
obj2.display();	
obj2.area();
obj2.perimeter();	

cout<<endl;
obj3.get();
obj3.display();	
obj3.area();
obj3.perimeter();	
cout<<endl;
obj4.get();
obj4.display();	
obj4.area();
obj4.perimeter();	

return 0;	
}
