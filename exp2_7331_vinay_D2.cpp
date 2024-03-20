#include<iostream>
using namespace std;
class demo{
public:
	int n;

int Series()
{
	cout<<"enter a integer: ";
cin>>n;
    int sum = 0;

    for (int i = 1 ; i <= n ; i++)

        for (int j = 1 ; j <= i ; j++)

            sum += j;

    return sum;
}	
};

int main()
{int d;
demo ob;

d=ob.Series();
cout<<d;
		return 0;
}
