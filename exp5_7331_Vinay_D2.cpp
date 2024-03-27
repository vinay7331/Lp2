// Classes are mainly used for wrapping a data and functions into a single unit. These are the main feature of
object-oriented programming. Whenever we need to encapsulate the data and the logic for processing the
data. To maintain clarity, you decide to define member functions outside the class declaration. Explain how
you would use the scope resolution operator to define the functions outside the class and ensure proper
linkage with the help of c++ programming example.




#include<iostream>
using namespace std;
class sum{
public:	
string name;

int add(int a,int b);
void display()
{
string name;
cin>>name;
	cout<<name;
	
	};	
};
int sum::add(int a ,int b)
{
return a+b ;
}

int main()
{
	int a,b,result;

sum obj;	
cout<<"enter 2 integers: ";
cin>>a>>b;	
result=obj.add(a,b);
cout<<"sum"<<result;	
	
return 0;
}
