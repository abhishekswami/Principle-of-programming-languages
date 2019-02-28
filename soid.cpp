Name of Program- 4 : Write a C program to find the sum of individual digits of a 3 digit number.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a three digit number :";
	cin>>a;
	int sum=0;
	while(a!=0)
	{
		int digit=a%10;
		sum= sum + digit;
		a=a/10;
	}
	cout<<"\nsum of the digits : "<<abs(sum);
	return 0;
}
