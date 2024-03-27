// Take a input from user with a positive integer. Write a function to compute the sum of series where n is input
by the user in the main function. Find sum of series where i-th term is sum of first i natural numbers.
Input : n = 5
Output : 35
Explanation : (1) + (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4+5) = 35



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
