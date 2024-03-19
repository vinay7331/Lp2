// A number is said to be vaid if it is divisible by 8......display count of valid numbers

#include<iostream>
using namespace std;
class number{
	public:
int i,count=0;
void get(){
	int a;
for(i=1;i>0;i++)
{int c=0;
cout<<"enter number= ";
cin>>a;
if(a%8==0)
{
	count+=1;
	}	
else
{
	i=-1;
}

	}	
cout<<"Total "<<count<<" "	<<"numbers are valid numbers";
	
}	
	
};

int main()
{
number ob;
ob.get();
		
	return 0;
}
