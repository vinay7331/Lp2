//A pointer is a variable that stores the memory address of another variable. It allows indirect access to the
value stored in that memory location. Pointers are powerful tools in C++ programming and are used for
various purposes, such as dynamic memory allocation, passing parameters to functions by reference.
Write a program to accept 3 integers and find maximum among 3 numbers using functions and pointers.
Function Specification:
int maximum (int *a,int *b, int *c)
This function returns the maximum among 3 numbers.



#include<iostream>
using namespace std;
int maximum(int *a,int *b,int *c)

{
if(*a>*b&& *a>*c)	
{
	return *a;
}
else if(*b>*a && *b>*c)
{
	return *b;
}
else
{
	return *c;
}
}


int main()
{
	int x,y,z;
	int *p,*q,*r;
	cout<<"enter three integers: ";
	cin>>x>>y>>z;
	p=&x,q=&y,r=&z;
int result=maximum(p,q,r);	
cout<<"largest integer: "<<result;	
	
return 0;	
}
