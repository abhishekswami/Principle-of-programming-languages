Name of Program-2: Write a C program to perform the addition of two numbers without using + operator
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the value of a and b";
	cin>>a>>b;
	int result;
	result= a-(~b)-1;
	cout<<"\na + b = "<<result;
	return 0;
}
